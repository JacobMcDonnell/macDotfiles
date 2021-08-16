#include <stdio.h>

/* Histogram of the frequencies of different characters */

main() {
	int c, i, nc, charFreq[26];

	for (i = 0; i < 26; i++)
		charFreq[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= 'A' && c <= 'Z')
			charFreq[c - 'A']++;
		else if (c >= 'a' && c <= 'z')
			charFreq[c - 'a']++;

	putchar('\n');
	for (i = 0; i < 26; i++){
		printf("%c: ", i+'A');
		for (nc = 0; nc <  charFreq[i]; nc++)
			putchar('=');
		printf("\n");
	}

}
