#include <stdio.h>

void func1();
void func2();

int main(void) {
	const unsigned int age = 28;
	printf("%d years = %d days\n", age, age * 365);
	for(int i=0;i<3;i++) 
		func1();
	return 0;
}

void func1() {
	printf("abcdef\n");
}
