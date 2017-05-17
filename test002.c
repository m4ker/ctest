#include <stdio.h>
void func1(void);
void func2(void);
int main(void) 
{
	//printf("Hello World\n");
	//return 0;
	func1();
	func2();
}

void func1(void) {
	printf("Hello");
}

void func2(void) {
	printf("World");
}
