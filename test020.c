#include <stdio.h>
int sum(int * arr, int);

int main(void) 
{

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int total = 0;

	total = sum(arr, sizeof arr / sizeof (int));

	printf("\n%d\n", total);
	
	return 0;
}

int sum ( int * arr, int n) 
{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
		printf("\n%d\n", total);
	}
	return total;
}
