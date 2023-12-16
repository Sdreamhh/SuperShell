#include <unistd.h>
#include <stdio.h>

#include "font.h"

int main(int argc, char* argv[]) {
	
	char cwd[128];
	char hostame[128];
	char cmdline[128];
       	getcwd(cwd, 128);
	gethostname(hostame, 128);


	while(1) {
		printf("├");		
		printf("%s%s%s%s%s", FG_GREEN, FT_ITALIC, FT_BOLD, hostame, FT_END);
		printf("%s%s->%s", FT_BLINK, FT_BOLD, FT_END);
		printf("%s%s%s%s", FG_MAGENTA, FT_BOLD, cwd, FT_END); 
		printf("\n└>");
		fgets(cmdline, 128, stdin);
	}

	return 0;
}
