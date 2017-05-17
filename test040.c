#include <stdio.h>
#include <string.h>
int main(void) {
	union a {
		int a;
		char b[9];
		float c;
	};

	char b[10];

	printf("int:%lu char:%lu float:%lu\n", sizeof (int), sizeof (char), sizeof(float));
	printf("union:%lu\n", sizeof(union a));
	printf("char[10]:%lu\n", sizeof b);

	union a c = {.a=9};
	printf("%d\n", c.a);

	c.c = 1.1;
	printf("%f\n", c.c);
	
	strcpy(c.b, "abcde");
	printf("%s\n", c.b);

	return 0;
}
