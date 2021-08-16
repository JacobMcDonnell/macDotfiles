#include <stdio.h>

/* Count characters in input; Version 1 */
main() {
	long nc;

	nc=0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
