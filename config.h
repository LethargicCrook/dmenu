/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = "run:";      /* -p  option; prompt to the left of input field */

/* colors */
static const char col_green[]   = "#b8bb26";
static const char col_bg0[]     = "#282828";
static const char col_aqua[]    = "#689d6a";
static const char col_blue[]    = "#458588";
////////////////////////////////////////////
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_green, col_bg0 },
	[SchemeSel] = { col_bg0, col_aqua },
	[SchemeOut] = { col_bg0, col_blue },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
