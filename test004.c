#include <stdio.h>
int main (void)
{
	float weight;
	float value;
	scanf("%f", &weight);
	value = 770 * weight * 14.5833;
	printf("%.2f\n", value);
	return 0;
}
