/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"VictorMonoNerdFont-Regular:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

#import "../solarized_color_scheme.h"
static const char *colors[SchemeLast][2] = {
		  /*     fg          bg       */
	[SchemeNorm] = { sol_base00, sol_base3},
	[SchemeSel] =  { sol_base01, sol_base2},
	[SchemeOut] =  { sol_base3,  sol_base3},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
