#include <stdio.h>
int main (void) 
{
	putchar('a');
	goto c;
	putchar('b');
	c: 
	putchar('c');
	return 0;
}
