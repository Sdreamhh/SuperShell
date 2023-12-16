#ifndef _FONT_H_
#define _FONT_H_

typedef enum {
        START,
        END
} FONT_STATE;

typedef enum {
        NORMAL = 0,
        BOLD,
        HALF_BRIGHT,
        ITALIC,
        UNDERSCORE,
        BLINK,
        REVERSE,

        FG_BLACK = 30,
        FG_RED,
        FG_GREEN,
        FG_BRWON,
        FG_BLUE,
        FG_MAGENTA,
        FG_CYAN,
        FG_WHITE,

        BG_BLACK = 40,
        BG_RED,
        BG_GREEN,
        BG_BROWN,
        BG_BLUE,
        BG_MAGENTA,
        BG_CYAN,
        BG_WHITE
} FONT;

char *font(FONT_STATE stat, FONT fg_color, FONT bg_color, FONT ft_style);

#endif
