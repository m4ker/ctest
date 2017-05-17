#include <stdio.h>
int put2(const char *);
int main(void) {
	int num;
	num = put2("ALKJDFLKJD sldfkj\n asdflasdkfjO");
	printf("%d letters\n", num);

	return 0;
}
int put2(const char * string) {
	int count = 0;
	while(*string) {
		putchar(*string++);
		count++;
	}
	putchar('\n');
	return count;
}
