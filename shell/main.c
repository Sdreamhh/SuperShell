#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "font.h"

#define MAXLINE 128
#define MAXARGS 64

void eval(char *cmdline);

int buildin_command(int argc, char *argv[]) {
	
	if(strcmp(argv[0], "quit") == 0) {
		exit(0);
	}
	if(strcmp(argv[0], "ll") == 0) {
		eval("ls -l\n");
	}
	
	return 0;						/* Not a buildin_command returns 0 */
}

void eval(char *cmdline) {

	char *argv[MAXARGS];
	int argc = 0;
	
	char buf[MAXLINE];				/* A copy of cmdline */

	pid_t pid;


	/* Get argv[] and argc */
	strcpy(buf, cmdline);

	int length = strlen(buf);
	buf[length - 1] = '\0';	/* Ignore '\n' */
	for(char *p = strtok(buf, " "); p != NULL; p = strtok(NULL, " ")) {
		argv[argc++] = p;
	}
	argv[argc] = NULL;
	if(argv[0] == NULL)
		return ;					/* Ignore empty lines */


	if(!buildin_command(argc, argv)) {
		if((pid = fork()) == 0) {
			execvp(argv[0], argv);
		}
		int status;
		wait(&status);
	}

}


int main(int argc, char* argv[]) {
	
	char cwd[MAXLINE];
	char hostame[MAXLINE];
	char cmdline[MAXLINE];
	
	getcwd(cwd, MAXLINE);
	gethostname(hostame, MAXLINE);


	while(1) {

		printf("├%s%s%s%s%s", FG_GREEN, FT_ITALIC, FT_BOLD, hostame, FT_END);
		printf("%s%s->%s", FT_BLINK, FT_BOLD, FT_END);
		printf("%s%s%s%s", FG_MAGENTA, FT_BOLD, cwd, FT_END); 
		printf("\n└>✓");
		fgets(cmdline, 128, stdin);

		eval(cmdline);

	}

	return 0;
}
