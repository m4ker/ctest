#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
int main ( void ) 
{
	char ch;
	while((ch = getchar()) != '\n') {
		if (!isalpha(ch)) 
			putchar(ch);
		else
			putchar(ch+1);
		//ch = getchar();
	}
	putchar(ch);
	return 0;
}
