#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	printf("%u\n", (unsigned int)time(0));
	for(int i=0;i<10;i++) {
		printf("%d\n", rand());
	}
	return 0;
}

