#include <stdio.h>
#include <limits.h>
int main (void) {
	int i;
	float f;

	printf("INT_MIN=%d, INT_MAX=%d\n", INT_MIN, INT_MAX);
	i = 2147483647;
	printf("%%d=%d\n", i);
	i += 1;
	printf("%%d=%d\n", i);
	i -= 1;
	printf("%%d=%d\n", i);

	return 0;
}
