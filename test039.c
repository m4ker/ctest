#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void)
{
	FILE * fp;
	char word[MAX];

	if ((fp = fopen("words", "a+")) == NULL) {
		fprintf(stderr, "Can't open \"words\" file.\n");
		exit(1);
	}

	fprintf(stdout, "Enter words to add to the file:\n");
	
	// todo: 这里怎么停不住了？ gets 和 fgets 对换行的处理不同
	//while(gets(word) != NULL && word[0] != '\0') {
	while(fgets(word, MAX, stdin) != NULL && word[0] != '\n') {
	
		fprintf(fp, "%s ", word);
		//puts(word);
	}

	puts("File contents:\n"); 

	rewind(fp);

	while(fscanf(fp, "%s", word) == 1)
		puts(word);

	if (fclose(fp) != 0)  {
		fprintf(stderr, "Error closing file\n");
		exit(2);
	}

	return 0;
}
