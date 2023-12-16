#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main() {

	char* path = realpath(".", NULL);
	printf("%s\n", path);
	free(path);

}
