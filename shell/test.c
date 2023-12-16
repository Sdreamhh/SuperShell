#include <stdio.h>
#include <stddef.h>

int main() {

	wchar_t c = L'└';
	for(int i = 0; i < 20; i++) {
		printf("%lc %lc\n", c+i, c-i);
	}
	return 0;
}
