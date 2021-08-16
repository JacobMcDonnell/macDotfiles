#include <stdio.h>
/* Counts blanks, tabs, and newlines */

main() {
	int c, bl, tb, nl;
	bl = tb = nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nl++;
		else if (c == ' ')
			bl++;
		else if (c == '\t')
			tb++;
	}
	printf("\n%d Blanks, %d Tabs, %d Newlines\n;", bl, tb, nl);
}
