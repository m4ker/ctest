#include <stdio.h>
int main (void) {
	double total  = 60000;
	double repay  = 5149.03;// repay per month
	double profit = 0;
	const double RATE=0.00875;// rate per month
	for (int i = 1; i < 13; i++) {
		profit += total * RATE;
		printf("month %d, total %f, profit %f\n", i, total, profit);
		total -= repay;
	}
	printf("%f\n", profit);
}
