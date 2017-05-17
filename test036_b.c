#include <stdio.h>
extern int rand0(void);
extern void srand0(unsigned int);

int main(void)
{
	unsigned seed;
	printf("Please enter your choice for seed. \n");
	while ( scanf("%u", &seed) == 1) {
		srand0(seed);
		for(int count = 0 ; count < 5 ; count++) 
			printf("%d\n", rand0());
		printf("Please enter your choice for seed(q to quit). \n");
	}
	printf("Done!\n");
	return 0;
}
