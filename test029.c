#include <stdio.h>
#include <ctype.h>
#define LMT 81

int punct_count(const char *);

void to_upper(char * );

int main (void) {
	char line[LMT];
	while (fgets(line, LMT, stdin)) {
		to_upper(line);
		printf("%s %d\n", line, punct_count(line));
	}
	return 0;
}

int punct_count(const char * str) {
	int count = 0;
	while(*str) {
		if (ispunct(*str))
			count++;
		str++;
	}
	return count;
}

void to_upper(char * str) {
	while(*str) {
		*str = toupper(*str);
		str++;
	}
}
