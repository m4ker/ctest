#include <stdio.h>
int strpos(char [], char []);

int main(void) {
	char str[40];
	char needle[40];
	int pos;
	
	gets(str);
	//printf("%s\n", str);

	gets(needle);
	//printf("%s\n", needle);

	pos = strpos(str, needle);
	if (pos < 0) {
		printf("%s is not in %s\n", needle, str);
	} else {
		printf("%s is in %s at pos:%d\n", needle, str, pos);
	}
	
	return 0;
}

int strpos(char str[], char needle[]) {
	//printf("%s\n", str);
	//printf("%s\n", needle);

	int i=0;
	int j=0;

	while (str[i] != '\0' && needle[j] != '\0') {
		//putchar(str[i]);
		if (str[i] == needle[j]) {
			i++;
			j++;
		} else {
			j=0;
			i=i-j+1;
		}
	}

	if (needle[j] == '\0') {
		return i-j;
	} else {
		return -1;
	}
}
