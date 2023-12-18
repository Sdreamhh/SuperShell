#include <string.h>
#include <stdio.h>
#include <unistd.h>



int main() {

    char cmdline[128];

    while(1) {

        fgets(cmdline, 128, stdin);
        cmdline[strlen(cmdline) - 1] = '\0';
        int cnt = 0;
        for(char *p = strtok(cmdline, " "); p != NULL; p = strtok(NULL, " ")) {
            printf("%s ", p);
            printf("%ld\n", strlen(p));
            cnt++;
        }
        printf("cnt: %d", cnt);

    }


    return 0;
}
