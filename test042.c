#include <stdio.h>
int fibonacci(int);
int fibonacci2(int,int,int);
int fibonacci3(int);
int main (void) {
	int in,out;
	scanf("%d", &in);
	out = fibonacci(in);
	printf("fibonacci(%d)=%d\n", in, out);
	out = fibonacci2(in, 1, 1);
	printf("fibonacci2(%d)=%d\n", in, out);
	out = fibonacci3(in);
	printf("fibonacci3(%d)=%d\n", in, out);
	return 0;
}

// 递归
int fibonacci(int n) {
	if (n <= 2) 
		return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

// 尾递归
int fibonacci2(int n, int prev, int curr) {
	if (n <= 2) 
		return curr;
	return fibonacci2(n-1, curr, prev+curr);
}

// 迭代形式
int fibonacci3(int n) {
	int prev=0;
	int curr=1;
	int tmp;
	for (int i=1; i<n; i++) {
		tmp  = prev+curr;
		prev = curr;
		curr = tmp;
	}
	return curr;
}

// todo 柯里化
