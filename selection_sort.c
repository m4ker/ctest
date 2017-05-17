#include <stdio.h>
#include <string.h>
#define MAX 81
#define LMT 10
int selection_sort(char * [], int num);
int main (void) {
	char input[LMT][MAX];
	char * ptr[LMT];
	int i = 0;
	int j;
	while(i < LMT && fgets(input[i], MAX, stdin) != NULL && input[i][0] != '\n') {
		ptr[i] = input[i];
		i++;
	}
	selection_sort(ptr, i);
	for(j = 0; j < i; j++) {
		printf("%s", ptr[j]);
	}
	return 0;
}
int selection_sort(char * ptr[], int num) {
	int top;
	int seek;
	char * temp;
	for(top = 0; top < (num - 1) ; top ++) {
		for(seek = top + 1; seek < num; seek ++) {
			if(strcmp(ptr[top], ptr[seek]) > 0) {
				temp = ptr[top];
				ptr[top] = ptr[seek];
				ptr[seek] = temp;
			}	
		}
	}
	return 0;	
}
