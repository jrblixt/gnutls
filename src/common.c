#include <stdio.h>
#include <gnutls.h>

#define PRINTX(x,y) if (y[0]!=0) printf(" #   %s %s\n", x, y)
#define PRINT_DN(X) PRINTX( "CN:", X.common_name); \
	PRINTX( "OU:", X.organizational_unit_name); \
	PRINTX( "O:", X.organization); \
	PRINTX( "L:", X.locality_name); \
	PRINTX( "S:", X.state_or_province_name); \
	PRINTX( "C:", X.country); \
	PRINTX( "E:", X.email)
#define PRINT_PGP_NAME(X) PRINTX( "NAME:", X.name); \
	PRINTX( "EMAIL:", X.email)

void print_x509_info(GNUTLS_STATE state)
{

	gnutls_x509_dn dn;
	const gnutls_datum *cert_list;
	int cert_list_size = 0;
	char digest[20];
	char serial[40];
	int digest_size = sizeof(digest), i;
	int serial_size = sizeof(serial);
	char printable[120];
	char *print;

	if (cert_list_size <= 0)
		return;

	cert_list = gnutls_certificate_get_peers(state, &cert_list_size);


	printf(" - Certificate info:\n");

	/* Print the fingerprint of the certificate
	 */
	if (gnutls_x509_fingerprint
	    (GNUTLS_DIG_MD5, &cert_list[0], digest, &digest_size) >= 0) {
		print = printable;
		for (i = 0; i < digest_size; i++) {
			sprintf(print, "%.2x ", (unsigned char) digest[i]);
			print += 3;
		}
		printf(" # Certificate fingerprint: %s\n", printable);
	}

	/* Print the serial number of the certificate.
	 */

	if (gnutls_x509_extract_certificate_serial
	    (&cert_list[0], serial, &serial_size) >= 0) {
		print = printable;
		for (i = 0; i < serial_size; i++) {
			sprintf(print, "%.2x ", (unsigned char) serial[i]);
			print += 3;
		}
		printf(" # Certificate serial number: %s\n", printable);
	}

	/* Print the version of the X.509 
	 * certificate.
	 */
	printf(" # Certificate version: #%d\n",
	       gnutls_x509_extract_certificate_version(&cert_list[0]));

	gnutls_x509_extract_certificate_dn(&cert_list[0], &dn);
	PRINT_DN(dn);

	gnutls_x509_extract_certificate_issuer_dn(&cert_list[0], &dn);
	printf(" # Certificate Issuer's info:\n");
	PRINT_DN(dn);

}

void print_openpgp_info(GNUTLS_STATE state)
{

	gnutls_openpgp_name pgp_name;
	char digest[20];
	int digest_size = sizeof(digest), i;
	char printable[120];
	char *print;
	const gnutls_datum *cert_list;
	int cert_list_size = 0;

	cert_list = gnutls_certificate_get_peers(state, &cert_list_size);

	if (cert_list_size > 0)
		if (gnutls_openpgp_fingerprint
		    (&cert_list[0], digest, &digest_size) >= 0) {
			print = printable;
			for (i = 0; i < digest_size; i++) {
				sprintf(print, "%.2x ",
					(unsigned char) digest[i]);
				print += 3;
			}

			printf(" # PGP Key version: %d\n", 
				gnutls_openpgp_extract_key_version(&cert_list[0]));

			printf(" # PGP Key fingerprint: %s\n",
			       printable);

			gnutls_openpgp_extract_key_name(&cert_list
							      [0], &pgp_name);
			PRINT_PGP_NAME(pgp_name);

		}


}

void print_cert_vrfy(GNUTLS_STATE state)
{

	GNUTLS_CertificateStatus status;
	status = gnutls_certificate_verify_peers(state);
	printf("\n");

	switch (status) {
	case GNUTLS_CERT_NOT_TRUSTED:
		printf("- Peer's certificate was NOT verified\n");
		break;
	case GNUTLS_CERT_EXPIRED:
		printf
		    ("- Peer's certificate was verified but is expired\n");
		break;
	case GNUTLS_CERT_TRUSTED:
		printf("- Peer's certificate was verified\n");
		break;
	case GNUTLS_CERT_NONE:
		printf("- Peer did not send any certificate.\n");
		break;
	case GNUTLS_CERT_CORRUPTED:
		printf("- Peer's certificate was corrupted.\n");
		break;
	default:
		printf("- Invalid status of peer's certificate.\n");
		break;
	}

}

int print_info(GNUTLS_STATE state)
{
	const char *tmp;
	GNUTLS_CredType cred;
	GNUTLS_KXAlgorithm kx;


	/* print the key exchange's algorithm name
	 */
	kx = gnutls_kx_get(state);
	tmp = gnutls_kx_get_name(kx);
	printf("- Key Exchange: %s\n", tmp);

	cred = gnutls_auth_get_type(state);
	switch (cred) {
	case GNUTLS_CRD_ANON:
		printf("- Anonymous DH using prime of %d bits\n",
		       gnutls_dh_get_bits(state));
		break;
	case GNUTLS_CRD_SRP:
		/* This should be only called in server
		 * side.
		 */
		if (gnutls_srp_server_get_username(state) != NULL)
			printf("- SRP authentication. Connected as '%s'\n",
			       gnutls_srp_server_get_username(state));
		break;
	case GNUTLS_CRD_CERTIFICATE:
		switch (gnutls_cert_type_get(state)) {
		case GNUTLS_CRT_X509:
			printf
			    ("- Peer requested X.509 certificate authentication.\n");

			print_x509_info(state);

			break;
		case GNUTLS_CRT_OPENPGP:{
				printf
				    ("- Peer requested OpenPGP certificate authentication.\n");

				print_openpgp_info(state);

				break;
			}
		}

		print_cert_vrfy(state);

		/* Check if we have been using ephemeral Diffie Hellman.
		 */
		if (kx == GNUTLS_KX_DHE_RSA || kx == GNUTLS_KX_DHE_DSS) {
			printf("\n- Ephemeral DH using prime of %d bits\n",
			       gnutls_dh_get_bits(state));
		}
	}

	tmp = gnutls_protocol_get_name(gnutls_protocol_get_version(state));
	printf("- Version: %s\n", tmp);

	tmp = gnutls_compression_get_name(gnutls_compression_get(state));
	printf("- Compression: %s\n", tmp);

	tmp = gnutls_cipher_get_name(gnutls_cipher_get(state));
	printf("- Cipher: %s\n", tmp);

	tmp = gnutls_mac_get_name(gnutls_mac_get(state));
	printf("- MAC: %s\n", tmp);

	return 0;
}
