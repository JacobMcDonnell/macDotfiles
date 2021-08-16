#include <stdio.h>
#define MAXLINE 1000 	/* maximum input line length */
#define MINLINE 80 	/* minimum length for characters to be outputed */

int getLine(char line[], int maxLine);

/* prints all inputs above 80 characters */
main() {
	int len, 	/* current line length */
	    max; 	/* max length seen so far */
	char line[MAXLINE]; 	/* current input line */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0)
		if (len > 80)
			printf("%s", line);
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim){
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
