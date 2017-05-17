#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "test037_a.h"

int main (void) {
	int dice, roll, sides;
	srand((unsigned int) time(0));
	printf("Enter the number of sides per dice, 0 to stop.\n");
	while(scanf("%d", &sides) == 1 && sides > 0) {
		printf("How many dice?\n");
		scanf("%d", &dice);	
		roll = roll_n(dice, sides);
		printf("You have rolled a %d using %d %d-sides dice.\n", roll, dice, sides);
		
		printf("Enter the number of sides per dice, 0 to stop.\n");
	}
	printf("The rollm() function was called %d times. \n", roll_count);
	printf("Bye!\n");
	return 0;
}
