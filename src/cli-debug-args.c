/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (cli-debug-args.c)
 *
 *  It has been AutoGen-ed  May  5, 2013 at 12:48:27 PM by AutoGen 5.17.3
 *  From the definitions    cli-debug-args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 38:0:13 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the gnutls-cli-debug author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The gnutls-cli-debug program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2000-2012 Free Software Foundation, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the GNU General Public License,
 *  version 3 or later <http://gnu.org/licenses/gpl.html>
 *
 *  gnutls-cli-debug is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gnutls-cli-debug is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "cli-debug-args.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;
#define zCopyright      (gnutls_cli_debug_opt_strs+0)
#define zLicenseDescrip (gnutls_cli_debug_opt_strs+283)


#ifndef NULL
#  define NULL 0
#endif

/**
 *  static const strings for gnutls-cli-debug options
 */
static char const gnutls_cli_debug_opt_strs[1818] =
/*     0 */ "gnutls-cli-debug @VERSION@\n"
            "Copyright (C) 2000-2012 Free Software Foundation, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the GNU General Public License,\n"
            "version 3 or later <http://gnu.org/licenses/gpl.html>\n\0"
/*   283 */ "gnutls-cli-debug is free software: you can redistribute it and/or modify it\n"
            "under the terms of the GNU General Public License as published by the Free\n"
            "Software Foundation, either version 3 of the License, or (at your option)\n"
            "any later version.\n\n"
            "gnutls-cli-debug is distributed in the hope that it will be useful, but\n"
            "WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY\n"
            "or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License\n"
            "for more details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   904 */ "Enable debugging.\0"
/*   922 */ "DEBUG\0"
/*   928 */ "debug\0"
/*   934 */ "More verbose output\0"
/*   954 */ "VERBOSE\0"
/*   962 */ "verbose\0"
/*   970 */ "The port to connect to\0"
/*   993 */ "PORT\0"
/*   998 */ "port\0"
/*  1003 */ "display extended usage information and exit\0"
/*  1047 */ "help\0"
/*  1052 */ "extended usage information passed thru pager\0"
/*  1097 */ "more-help\0"
/*  1107 */ "output version information and exit\0"
/*  1143 */ "version\0"
/*  1151 */ "GNUTLS_CLI_DEBUG\0"
/*  1168 */ "gnutls-cli-debug - GnuTLS debug client\n"
            "Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... \n\0"
/*  1266 */ "bug-gnutls@gnu.org\0"
/*  1285 */ "\n\0"
/*  1287 */ "TLS debug client.  It sets up multiple TLS connections to a server and\n"
            "queries its capabilities.  It was created to assist in debugging GnuTLS,\n"
            "but it might be useful to extract a TLS server's capabilities.  It connects\n"
            "to a TLS server, performs tests and print the server's capabilities.  If\n"
            "called with the `-v' parameter more checks will be performed.  Can be used\n"
            "to check for servers with special needs or bugs.\n\0"
/*  1705 */ "gnutls-cli-debug @VERSION@\0"
/*  1732 */ "Usage: gnutls-cli-debug [options] hostname\n"
            "gnutls-cli --help for usage instructions.\n";

/**
 *  debug option description:
 */
/** Descriptive text for the debug option */
#define DEBUG_DESC      (gnutls_cli_debug_opt_strs+904)
/** Upper-cased name for the debug option */
#define DEBUG_NAME      (gnutls_cli_debug_opt_strs+922)
/** Name string for the debug option */
#define DEBUG_name      (gnutls_cli_debug_opt_strs+928)
/** Compiled in flag settings for the debug option */
#define DEBUG_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/**
 *  verbose option description:
 */
/** Descriptive text for the verbose option */
#define VERBOSE_DESC      (gnutls_cli_debug_opt_strs+934)
/** Upper-cased name for the verbose option */
#define VERBOSE_NAME      (gnutls_cli_debug_opt_strs+954)
/** Name string for the verbose option */
#define VERBOSE_name      (gnutls_cli_debug_opt_strs+962)
/** Compiled in flag settings for the verbose option */
#define VERBOSE_FLAGS     (OPTST_DISABLED)

/**
 *  port option description:
 */
/** Descriptive text for the port option */
#define PORT_DESC      (gnutls_cli_debug_opt_strs+970)
/** Upper-cased name for the port option */
#define PORT_NAME      (gnutls_cli_debug_opt_strs+993)
/** Name string for the port option */
#define PORT_name      (gnutls_cli_debug_opt_strs+998)
/** Compiled in flag settings for the port option */
#define PORT_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (gnutls_cli_debug_opt_strs+1003)
#define HELP_name       (gnutls_cli_debug_opt_strs+1047)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (gnutls_cli_debug_opt_strs+1052)
#define MORE_HELP_name  (gnutls_cli_debug_opt_strs+1097)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  NULL
#define MORE_HELP_name  NULL
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (gnutls_cli_debug_opt_strs+1107)
#define VER_name        (gnutls_cli_debug_opt_strs+1143)
/**
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptDebug, doOptPort, doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the gnutls-cli-debug Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the gnutls-cli-debug program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_DEBUG,
     /* equiv idx, value */ 0, VALUE_OPT_DEBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DEBUG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --debug */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptDebug,
     /* desc, NAME, name */ DEBUG_DESC, DEBUG_NAME, DEBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_VERBOSE,
     /* equiv idx, value */ 1, VALUE_OPT_VERBOSE,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ VERBOSE_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --verbose */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ VERBOSE_DESC, VERBOSE_NAME, VERBOSE_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_PORT,
     /* equiv idx, value */ 2, VALUE_OPT_PORT,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PORT_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --port */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptPort,
     /* desc, NAME, name */ PORT_DESC, PORT_NAME, PORT_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, AOUSE_VERSION,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, AOUSE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, AOUSE_MORE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/** Reference to the upper cased version of gnutls-cli-debug. */
#define zPROGNAME       (gnutls_cli_debug_opt_strs+1151)
/** Reference to the title line for gnutls-cli-debug usage. */
#define zUsageTitle     (gnutls_cli_debug_opt_strs+1168)
/** There is no gnutls-cli-debug configuration file. */
#define zRcName         NULL
/** There are no directories to search for gnutls-cli-debug config files. */
#define apzHomeList     NULL
/** The gnutls-cli-debug program bug email address. */
#define zBugsAddr       (gnutls_cli_debug_opt_strs+1266)
/** Clarification/explanation of what gnutls-cli-debug does. */
#define zExplain        (gnutls_cli_debug_opt_strs+1285)
/** Extra detail explaining what gnutls-cli-debug does. */
#define zDetail         (gnutls_cli_debug_opt_strs+1287)
/** The full version string for gnutls-cli-debug. */
#define zFullVersion    (gnutls_cli_debug_opt_strs+1705)
/* extracted from optcode.tlib near line 371 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE | OPTPROC_NXLAT_OPT
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */

#define gnutls_cli_debug_full_usage (NULL)
#define gnutls_cli_debug_short_usage (gnutls_cli_debug_opt_strs+1732)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param[in] pOptions the AutoOpts option description structure
 * @param[in] pOptDesc the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * pOptions, tOptDesc * pOptDesc)
{
    optionUsage(&gnutls_cli_debugOptions, GNUTLS_CLI_DEBUG_EXIT_SUCCESS);
    /* NOTREACHED */
    (void)pOptDesc;
    (void)pOptions;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the debug option.
 * Specifies the debug level.
 * @param[in] pOptions the gnutls-cli-debug options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptDebug(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  9999 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

 emit_ranges:
    optionShowRange(pOptions, pOptDesc, (void *)rng, 1);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the port option.
 *
 * @param[in] pOptions the gnutls-cli-debug options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptPort(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  65536 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

 emit_ranges:
    optionShowRange(pOptions, pOptDesc, (void *)rng, 1);
}
/* extracted from optmain.tlib near line 1254 */

/**
 * The directory containing the data associated with gnutls-cli-debug.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged gnutls-cli-debug
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define gnutls_cli_debug_packager_info NULL
#else
/** Packager information for gnutls-cli-debug. */
static char const gnutls_cli_debug_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport gnutls_cli_debug bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for gnutls-cli-debug.  The one structure that
 * binds them all.
 */
tOptions gnutls_cli_debugOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_ARGS_REQ
    + OPTPROC_REORDER
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    6 /* full option count */, 3 /* user option count */,
    gnutls_cli_debug_full_usage, gnutls_cli_debug_short_usage,
    NULL, NULL,
    PKGDATADIR, gnutls_cli_debug_packager_info
};

#if ENABLE_NLS
/**
 * This code is designed to translate translatable option text for the
 * gnutls-cli-debug program.  These translations happen upon entry
 * to optionProcess().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef HAVE_DCGETTEXT
# include <gettext.h>
#endif
#include <autoopts/usage-txt.h>

static char * AO_gettext(char const * pz);
static void   coerce_it(void ** s);

/**
 * AutoGen specific wrapper function for gettext.  It relies on the macro _()
 * to convert from English to the target language, then strdup-duplicates the
 * result string.  It tries the "libopts" domain first, then whatever has been
 * set via the \a textdomain(3) call.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const * pz)
{
    char * res;
    if (pz == NULL)
        return NULL;
#ifdef HAVE_DCGETTEXT
    /*
     * While processing the option_xlateable_txt data, try to use the
     * "libopts" domain.  Once we switch to the option descriptor data,
     * do *not* use that domain.
     */
    if (option_xlateable_txt.field_ct != 0) {
        res = dgettext("libopts", pz);
        if (res == pz)
            res = (char *)(void *)_(pz);
    } else
        res = (char *)(void *)_(pz);
#else
    res = (char *)(void *)_(pz);
#endif
    if (res == pz)
        return res;
    res = strdup(res);
    if (res == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(GNUTLS_CLI_DEBUG_EXIT_FAILURE);
    }
    return res;
}

/**
 * All the pointers we use are marked "* const", but they are stored in
 * writable memory.  Coerce the mutability and set the pointer.
 */
static void coerce_it(void ** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the gnutls_cli_debugOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const opts = &gnutls_cli_debugOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_xlateable_txt.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        char ** ppz = (char**)(void*)&(option_xlateable_txt);
        int     ix  = option_xlateable_txt.field_ct;

        do {
            ppz++; /* skip over field_ct */
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);
        /* prevent re-translation and disable "libopts" domain lookup */
        option_xlateable_txt.field_ct = 0;

        coerce_it((void*)&(opts->pzCopyright));
        coerce_it((void*)&(opts->pzCopyNotice));
        coerce_it((void*)&(opts->pzFullVersion));
        coerce_it((void*)&(opts->pzUsageTitle));
        coerce_it((void*)&(opts->pzExplain));
        coerce_it((void*)&(opts->pzDetail));
        {
            tOptDesc * od = opts->pOptDesc;
            for (ix = opts->optCt; ix > 0; ix--, od++)
                coerce_it((void*)&(od->pzText));
        }
    }
}
#endif /* ENABLE_NLS */

#ifdef DO_NOT_COMPILE_THIS_CODE_IT_IS_FOR_GETTEXT
/** I18N function strictly for xgettext.  Do not compile. */
static void bogus_function(void) {
  /* TRANSLATORS:

     The following dummy function was crated solely so that xgettext can extract
     the correct strings.  These strings are actually referenced by a field name
     in the gnutls_cli_debugOptions structure noted in the comments below.  The
     literal text is defined in gnutls_cli_debug_opt_strs.
   
     NOTE: the strings below are segmented with respect to the source string
     gnutls_cli_debug_opt_strs.  The strings above are handed off for translation
     at run time a paragraph at a time.  Consequently, they are presented here
     for translation a paragraph at a time.
   
     ALSO: often the description for an option will reference another option
     by name.  These are set off with apostrophe quotes (I hope).  Do not
     translate option names.
   */
  /* referenced via gnutls_cli_debugOptions.pzCopyright */
  puts(_("gnutls-cli-debug @VERSION@\n\
Copyright (C) 2000-2012 Free Software Foundation, all rights reserved.\n\
This is free software. It is licensed for use, modification and\n\
redistribution under the terms of the GNU General Public License,\n\
version 3 or later <http://gnu.org/licenses/gpl.html>\n"));

  /* referenced via gnutls_cli_debugOptions.pzCopyNotice */
  puts(_("gnutls-cli-debug is free software: you can redistribute it and/or modify it\n\
under the terms of the GNU General Public License as published by the Free\n\
Software Foundation, either version 3 of the License, or (at your option)\n\
any later version.\n\n"));
  puts(_("gnutls-cli-debug is distributed in the hope that it will be useful, but\n\
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY\n\
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License\n\
for more details.\n\n"));
  puts(_("You should have received a copy of the GNU General Public License along\n\
with this program.  If not, see <http://www.gnu.org/licenses/>.\n"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("Enable debugging."));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("More verbose output"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("The port to connect to"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("display extended usage information and exit"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("extended usage information passed thru pager"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("output version information and exit"));

  /* referenced via gnutls_cli_debugOptions.pzUsageTitle */
  puts(_("gnutls-cli-debug - GnuTLS debug client\n\
Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... \n"));

  /* referenced via gnutls_cli_debugOptions.pzExplain */
  puts(_("\n"));

  /* referenced via gnutls_cli_debugOptions.pzDetail */
  puts(_("TLS debug client.  It sets up multiple TLS connections to a server and\n\
queries its capabilities.  It was created to assist in debugging GnuTLS,\n\
but it might be useful to extract a TLS server's capabilities.  It connects\n\
to a TLS server, performs tests and print the server's capabilities.  If\n\
called with the `-v' parameter more checks will be performed.  Can be used\n\
to check for servers with special needs or bugs.\n"));

  /* referenced via gnutls_cli_debugOptions.pzFullVersion */
  puts(_("gnutls-cli-debug @VERSION@"));

  /* referenced via gnutls_cli_debugOptions.pzFullUsage */
  puts(_("<<<NOT-FOUND>>>"));

  /* referenced via gnutls_cli_debugOptions.pzShortUsage */
  puts(_("Usage: gnutls-cli-debug [options] hostname\n\
gnutls-cli --help for usage instructions.\n"));
  /* LIBOPTS-MESSAGES: */
#line 60 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 86 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 53 "../init.c"
  puts(_("AutoOpts function called without option descriptor\n"));
#line 89 "../init.c"
  puts(_("\tThis exceeds the compiled library version:  "));
#line 87 "../init.c"
  puts(_("Automated Options Processing Error!\n"
       "\t%s called AutoOpts function with structure version %d:%d:%d.\n"));
#line 73 "../autoopts.c"
  puts(_("realloc of %d bytes at 0x%p failed\n"));
#line 91 "../init.c"
  puts(_("\tThis is less than the minimum library version:  "));
#line 121 "../version.c"
  puts(_("Automated Options version %s\n"
       "\tCopyright (C) 1999-2013 by Bruce Korb - all rights reserved\n"));
#line 310 "../usage.c"
  puts(_("(AutoOpts bug):  %s.\n"));
#line 90 "../reset.c"
  puts(_("optionResetOpt() called, but reset-option not configured"));
#line 329 "../usage.c"
  puts(_("could not locate the 'help' option"));
#line 351 "../autoopts.c"
  puts(_("optionProcess() was called with invalid data"));
#line 783 "../usage.c"
  puts(_("invalid argument type specified"));
#line 589 "../find.c"
  puts(_("defaulted to option with optional arg"));
#line 76 "../alias.c"
  puts(_("aliasing option is out of range."));
#line 229 "../enum.c"
  puts(_("%s error:  the keyword '%s' is ambiguous for %s\n"));
#line 108 "../find.c"
  puts(_("  The following options match:\n"));
#line 290 "../find.c"
  puts(_("%s: ambiguous option name: %s (matches %d options)\n"));
#line 161 "../check.c"
  puts(_("%s: Command line arguments required\n"));
#line 43 "../alias.c"
  puts(_("%d %s%s options allowed\n"));
#line 81 "../makeshell.c"
  puts(_("%s error %d (%s) calling %s for '%s'\n"));
#line 293 "../makeshell.c"
  puts(_("interprocess pipe"));
#line 168 "../version.c"
  puts(_("error: version option argument '%c' invalid.  Use:\n"
       "\t'v' - version only\n"
       "\t'c' - version and copyright\n"
       "\t'n' - version and full copyright notice\n"));
#line 58 "../check.c"
  puts(_("%s error:  the '%s' and '%s' options conflict\n"));
#line 214 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 421 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 38 "../alias.c"
  puts(_("-equivalence"));
#line 460 "../find.c"
  puts(_("%s: illegal option -- %c\n"));
#line 110 "../reset.c"
  puts(_("%s: illegal option -- %c\n"));
#line 268 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 746 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 118 "../reset.c"
  puts(_("%s: illegal option -- %s\n"));
#line 332 "../find.c"
  puts(_("%s: unknown vendor extension option -- %s\n"));
#line 154 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 164 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 782 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 1110 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 379 "../find.c"
  puts(_("%s: invalid option name: %s\n"));
#line 518 "../find.c"
  puts(_("%s: The '%s' option requires an argument.\n"));
#line 171 "../autoopts.c"
  puts(_("(AutoOpts bug):  Equivalenced option '%s' was equivalenced to both\n"
       "\t'%s' and '%s'."));
#line 94 "../check.c"
  puts(_("%s error:  The %s option is required\n"));
#line 623 "../find.c"
  puts(_("%s: The '%s' option cannot have an argument.\n"));
#line 151 "../check.c"
  puts(_("%s: Command line arguments are not allowed.\n"));
#line 531 "../save.c"
  puts(_("error %d (%s) creating %s\n"));
#line 229 "../enum.c"
  puts(_("%s error:  '%s' does not match any %s keywords.\n"));
#line 93 "../reset.c"
  puts(_("%s error: The '%s' option requires an argument.\n"));
#line 184 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 238 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 143 "../restore.c"
  puts(_("%s error: no saved option state\n"));
#line 246 "../autoopts.c"
  puts(_("'%s' is not a command line option.\n"));
#line 114 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable date/time.\n"));
#line 132 "../save.c"
  puts(_("'%s' not defined\n"));
#line 53 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable time duration.\n"));
#line 92 "../check.c"
  puts(_("%s error:  The %s option must appear %d times.\n"));
#line 157 "../numeric.c"
  puts(_("%s error:  '%s' is not a recognizable number.\n"));
#line 195 "../enum.c"
  puts(_("%s error:  %s exceeds %s keyword count\n"));
#line 366 "../usage.c"
  puts(_("Try '%s %s' for more information.\n"));
#line 45 "../alias.c"
  puts(_("one %s%s option allowed\n"));
#line 195 "../makeshell.c"
  puts(_("standard output"));
#line 930 "../makeshell.c"
  puts(_("standard output"));
#line 304 "../usage.c"
  puts(_("standard output"));
#line 451 "../usage.c"
  puts(_("standard output"));
#line 660 "../usage.c"
  puts(_("standard output"));
#line 175 "../version.c"
  puts(_("standard output"));
#line 304 "../usage.c"
  puts(_("standard error"));
#line 451 "../usage.c"
  puts(_("standard error"));
#line 660 "../usage.c"
  puts(_("standard error"));
#line 175 "../version.c"
  puts(_("standard error"));
#line 195 "../makeshell.c"
  puts(_("write"));
#line 930 "../makeshell.c"
  puts(_("write"));
#line 303 "../usage.c"
  puts(_("write"));
#line 450 "../usage.c"
  puts(_("write"));
#line 659 "../usage.c"
  puts(_("write"));
#line 174 "../version.c"
  puts(_("write"));
#line 60 "../numeric.c"
  puts(_("%s error:  %s option value %ld is out of range.\n"));
#line 44 "../check.c"
  puts(_("%s error:  %s option requires the %s option\n"));
#line 131 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 183 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 237 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 256 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 530 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
  /* END-LIBOPTS-MESSAGES */

  /* USAGE-TEXT: */
#line 908 "../usage.c"
  puts(_("\t\t\t\t- an alternate for '%s'\n"));
#line 1177 "../usage.c"
  puts(_("Version, usage and configuration options:"));
#line 959 "../usage.c"
  puts(_("\t\t\t\t- default option for unnamed options\n"));
#line 872 "../usage.c"
  puts(_("\t\t\t\t- disabled as '--%s'\n"));
#line 1146 "../usage.c"
  puts(_(" --- %-14s %s\n"));
#line 1144 "../usage.c"
  puts(_("This option has been disabled"));
#line 899 "../usage.c"
  puts(_("\t\t\t\t- enabled by default\n"));
#line 40 "../alias.c"
  puts(_("%s error:  only "));
#line 1221 "../usage.c"
  puts(_(" - examining environment variables named %s_*\n"));
#line 168 "../file.c"
  puts(_("\t\t\t\t- file must not pre-exist\n"));
#line 172 "../file.c"
  puts(_("\t\t\t\t- file must pre-exist\n"));
#line 416 "../usage.c"
  puts(_("Options are specified by doubled hyphens and their name or by a single\n"
       "hyphen and the flag character.\n"));
#line 908 "../makeshell.c"
  puts(_("\n"
       "= = = = = = = =\n\n"
       "This incarnation of genshell will produce\n"
       "a shell script to parse the options for %s:\n\n"));
#line 161 "../enum.c"
  puts(_("  or an integer mask with any of the lower %d bits set\n"));
#line 932 "../usage.c"
  puts(_("\t\t\t\t- is a set membership option\n"));
#line 953 "../usage.c"
  puts(_("\t\t\t\t- must appear between %d and %d times\n"));
#line 418 "../usage.c"
  puts(_("Options are specified by single or double hyphens and their name.\n"));
#line 939 "../usage.c"
  puts(_("\t\t\t\t- may appear multiple times\n"));
#line 926 "../usage.c"
  puts(_("\t\t\t\t- may not be preset\n"));
#line 1336 "../usage.c"
  puts(_("   Arg Option-Name    Description\n"));
#line 1272 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1330 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1331 "../usage.c"
  puts(_(" %3s %s"));
#line 1337 "../usage.c"
  puts(_(" %3s %s"));
#line 423 "../usage.c"
  puts(_("The '-#<number>' option may omit the hash char\n"));
#line 419 "../usage.c"
  puts(_("All arguments are named options.\n"));
#line 1006 "../usage.c"
  puts(_(" - reading file %s"));
#line 445 "../usage.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 100 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 129 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 938 "../usage.c"
  puts(_("\t\t\t\t- may NOT appear - preset only\n"));
#line 978 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 1219 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 717 "../usage.c"
  puts(_("prohibits these options:\n"));
#line 712 "../usage.c"
  puts(_("prohibits the option '%s'\n"));
#line 81 "../numeric.c"
  puts(_("%s%ld to %ld"));
#line 79 "../numeric.c"
  puts(_("%sgreater than or equal to %ld"));
#line 75 "../numeric.c"
  puts(_("%s%ld exactly"));
#line 68 "../numeric.c"
  puts(_("%sit must lie in one of the ranges:\n"));
#line 68 "../numeric.c"
  puts(_("%sit must be in the range:\n"));
#line 88 "../numeric.c"
  puts(_(", or\n"));
#line 66 "../numeric.c"
  puts(_("%sis scalable with a suffix: k/K/m/M/g/G/t/T\n"));
#line 77 "../numeric.c"
  puts(_("%sless than or equal to %ld"));
#line 426 "../usage.c"
  puts(_("Operands and options may be intermixed.  They will be reordered.\n"));
#line 687 "../usage.c"
  puts(_("requires the option '%s'\n"));
#line 690 "../usage.c"
  puts(_("requires these options:\n"));
#line 1348 "../usage.c"
  puts(_("   Arg Option-Name   Req?  Description\n"));
#line 1342 "../usage.c"
  puts(_("  Flg Arg Option-Name   Req?  Description\n"));
#line 162 "../enum.c"
  puts(_("or you may use a numeric representation.  Preceding these with a '!'\n"
       "will clear the bits, specifying 'none' will clear all bits, and 'all'\n"
       "will set them all.  Multiple entries may be passed as an option\n"
       "argument list.\n"));
#line 945 "../usage.c"
  puts(_("\t\t\t\t- may appear up to %d times\n"));
#line 72 "../enum.c"
  puts(_("The valid \"%s\" option keywords are:\n"));
#line 1181 "../usage.c"
  puts(_("The next option supports vendor supported extra options:"));
#line 808 "../usage.c"
  puts(_("These additional options are:"));
  /* END-USAGE-TEXT */
}
#endif /* uncompilable code */
#ifdef  __cplusplus
}
#endif
/* cli-debug-args.c ends here */
