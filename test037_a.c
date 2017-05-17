#include <stdio.h>
#include <stdlib.h>
#include "test037_a.h"
int roll_count = 0;
static int rollm(int sides) {
	int roll;
	roll = rand() % sides +1;
	roll_count++;
	return roll;
}
int roll_n(int dice, int sides) {
	int total;
	if (sides < 2) {
		printf("Need at least 2 sides.\n");
		return -2;
	}
	if (dice < 1) {
		printf("Need at least 1 dice.\n");
		return -1;
	}
	for(int d=0; d<dice; d++)
		total += rollm(sides);
	return total;
}
