#include <unistd.h>
#include <stdio.h>

#include "font.h"

int main(int argc, char* argv[]) {
	
	printf("%shello world%s\n", font(START, FG_RED, BG_BLACK, NORMAL), font(END, FG_RED, BG_BLACK, NORMAL));

	char cwd[128];
	char hostame[128];
	char cmdline[128];
       	getcwd(cwd, 128);
	gethostname(hostame, 128);


	while(1) {
		printf("%s->%s> ", hostame, cwd);	
		fgets(cmdline, 128, stdin);
	}

	return 0;
}
