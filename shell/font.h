/*
 * Uasge: printf("%s->s", FG_RED, FT_END);
 * Disadvantage: Too long to edit.
 */



#ifndef _FONT_H_
#define _FONT_H_

#define FT_END		"\033[0m"

/*font style*/
#define FT_BOLD		"\033[1m"
#define FT_HALF_BRIGHT	"\033[2m"
#define FT_ITALIC	"\033[3m"
#define FT_UNDERLINE	"\033[4m"
#define FT_BLINK	"\033[5m"
#define FT_REVERSE	"\033[6m"

/*foreground color*/
#define FG_BLACK 	"\033[30m"
#define FG_RED 		"\033[31m"
#define FG_GREEN	"\033[32m"
#define FG_BROWN 	"\033[33m"
#define FG_BLUE		"\033[34m"
#define FG_MAGENTA	"\033[35m"
#define FG_CYAN		"\033[36m"
#define FG_WHITE	"\033[37m"

/*background color*/
#define BG_BLACK 	"\033[40m"
#define BG_RED 		"\033[41m"
#define BG_GREEN	"\033[42m"
#define BG_BROWN 	"\033[43m"
#define BG_BLUE		"\033[44m"
#define BG_MAGENTA	"\033[45m"
#define BG_CYAN		"\033[46m"
#define BG_WHITE	"\033[47m"

#endif
