#include <stdio.h>

/* count digits, white spaces, others */
main() {
	int c, i, nWhite, nOther;
	int nDigit[10];

	nWhite = nOther = 0;
	for (i = 0; i < 10; i++)
		nDigit[i] = 0;
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++nDigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nWhite;
		else
			++nOther;
	printf("\nDigits =");
	for (i = 0; i < 10; i++)
		printf(" %d", nDigit[i]);
	printf(", white space = %d, other = %d\n", nWhite, nOther);
}
