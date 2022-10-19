/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"sourcecodepro:size=17"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* colors */
static const char col_yellow[]  = "#bfa815";
static const char col_bg[]      = "#0e1216";
static const char col_orange[]  = "#fc8c0c";
static const char *colors[SchemeLast][2] = {
        /*		   fg		bg   */
        [SchemeNorm] = { col_yellow, col_bg },
        [SchemeSel] = { col_bg, col_orange },
        [SchemeOut] = { col_bg, col_yellow },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 12;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
