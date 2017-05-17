#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]) {
	int c;
	while((c = getopt(argc, argv, "abc")) != -1) {
		putchar(c);
	}
	return 0;
}
