#include <stdio.h>
#include <stdarg.h>
void func(int n, ...) {
	va_list ap;
	va_start(ap, n);

	int a;
	
	for (int i = 0;i<10;i++) {
		a = va_arg(ap, int);
		printf("%d\n", a);
	}
}
	
int main (void) {
	func(1,2,3,4);
	//func(1,2,3,4,5,6,7);
	return 1;
}


