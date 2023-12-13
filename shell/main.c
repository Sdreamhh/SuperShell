#include <unistd.h>
#include <stdio.h>



int main(int argc, char* argv[]) {
	
	char cwd[128];
	char hostame[128];
	char cmdline[128];
       	getcwd(cwd, 128);
	gethostname(hostame, 128);


	while(1) {
		printf("%s: %s> ", hostame, cwd);	
		fgets(cmdline, 128, stdin);
	}

	return 0;
}
