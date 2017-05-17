#include <stdio.h>
#include <string.h>
int main (void) {
	//char * first = "wang";
	char first[] = "wang";
	//char * last = "mo";
	char last[] = "mo";
	char * address = "Wangjing North Street, Chaoyang District, Beijing City, China";

	printf("%s %s\n", first, last);
	printf("%s\n%s\n", first, last);
	printf("%s", first);
	printf("%s\n", last);

	printf("sizeof * address = %lu\n", sizeof address);
	printf("sizeof first[] = %lu\n", sizeof first);

	printf("strlen * address = %lu\n", strlen(address));
	printf("strlen first[] = %lu\n", strlen(first));

	return 0;
}
