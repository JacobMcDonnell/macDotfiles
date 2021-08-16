#include <stdio.h>
/* Copies input to output replacing strings of one or more blanks with a a single blank */

main() {
	int c, blankState = 0;

	while((c = getchar()) != EOF) {
		if (c == ' '){
			if (blankState == 0){
				blankState = 1;
				putchar(c);
			}
		}
		if (c != ' '){
			blankState = 0;
			putchar(c);
		}
	}
}
