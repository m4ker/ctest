#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main (void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Your name?\n");
	scanf("%s", name);
	printf("%s, your weight in pounds?\n", name);
	scanf("%f", &weight);
	
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;

	printf("%s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("name has %d letters.\n", letters);
	printf("we have %d bytes to store it in. \n", size);

	return 0;
}
