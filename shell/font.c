#include "font.h"

char *font_start = "\0x1B[0;30;40m";
char *font_end 	 = "\0x1B[0m";


char *font(FONT_STATE stat, FONT fg_color, FONT bg_color, FONT ft_style) {

	if(stat == END)
		return font_end;

	
	font_start[5] = (char)(ft_style + '0');
	font_start[8] = (char)(fg_color - 30 + '0');
	font_start[11]= (char)(bg_color - 40 + '0');

	return font_start;
}
