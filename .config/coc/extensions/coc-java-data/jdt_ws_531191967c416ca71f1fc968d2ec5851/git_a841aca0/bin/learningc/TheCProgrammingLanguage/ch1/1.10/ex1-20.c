#include <stdio.h>

#define MAXLINE 1000 	/* maximum input line size */
#define TABSTOP 4 	/* the number of spaces a tab is */

int max; 		/* maximum length seen so far */
char line[MAXLINE]; 	/* current input */

int getLine(void);
void removeTabs(void);

/* print longest input line; specialized version */
main() {
	int len;
	extern int max;
	char output[MAXLINE];

	max = 0;
	while ((len = getLine()) > 0)
		removeTabs();
	return 0;
}

/* getLine: specialized version */
int getLine(void){
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

/* removeTabs: replaces tabs with spaces defined by TABSTOP */
void removeTabs(void) {
	int i, j;
	extern char line[];
	char temp[MAXLINE];

	i = j = 0;
	while (line[i] != '\0') {
		if (line[i] == '\t') {
			for (int t = 0; t < TABSTOP; t++)
				temp[t+j] = ' ';
			j += TABSTOP;
		} else {
			temp[j] = line[i];
			j++;
		}
		i++;
	}
	temp[j] = '\0';
	printf("%s\n", temp);
}
