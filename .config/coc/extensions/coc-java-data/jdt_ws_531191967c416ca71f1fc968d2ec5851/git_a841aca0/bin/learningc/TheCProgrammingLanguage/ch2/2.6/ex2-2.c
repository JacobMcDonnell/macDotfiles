/*
 * Exercise 2-2
 * A for loop equivalent to the for loop in section 2.6 without && or ||
 * for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; i++)
 * 	s[i] = c;
 */
#include <stdio.h>

#define lim 5

int main() {
	int i, c;
	char s[lim];
	for (i = 0; i < lim-1; i++)
		if ((c = getchar()) != '\n')
			if (c != EOF)
				s[i] = c;
	return 0;
}
