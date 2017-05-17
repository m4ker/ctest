#include <stdio.h>
int unit = 0;
int func(void);
int main (void) {
	printf("%d\n", unit);
	unit++;	
	func();
	printf("%d\n", unit);
	return 0;
}
int func (void) {
	printf("func:%d\n", unit);
	unit++;	
	printf("func:%d\n", unit);
	return 0;
}
