#include <stdio.h>
#define MAXLINE 1000 	/* maximum input line length */
#define MINLINE 80 	/* minimum length for characters to be outputed */

int getLine(char line[], int maxLine);
void reverse(char to[], char from[], int len);

/* prints all inputs above 80 characters */
main() {
	int len, 	/* current line length */
	    max; 	/* max length seen so far */
	char line[MAXLINE], 	/* current input line */
	     reversed[MAXLINE]; 	/* reversed input */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0){
		reverse(reversed, line, len);
		printf("%s\n", reversed);
	}
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

/* reverse: reverse 'from' into 'to'; assume to is big enough */
void reverse(char to[], char from[], int len){
	int i, c;

	i = 0;
	for (c = len-1; c >= 0; c--){
		to[i] = from[c];
		i++;
	}
	to[i] = '\0';
}
