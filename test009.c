#include <stdio.h>
int main (void) 
{
	printf("Type int has a size of %lu bytes . \n", sizeof(int));
	printf("Type char has a size of %lu bytes . \n", sizeof(char));
	printf("Type long has a size of %lu bytes . \n", sizeof(long));
	printf("sizeof 'a' =  %lu bytes . \n", sizeof('a'));
	printf("sizeof \"abcdefg\" =  %lu bytes . \n", sizeof("abcdefg"));
	printf("sizeof \"abcdefghig\" =  %lu bytes . \n", sizeof("abcdefghig"));
	printf("sizeof &main =  %lu bytes . \n", sizeof(&main));
}
