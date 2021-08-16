#include <stdio.h>
#include "bitcount.c"

int main(void)
{
	unsigned x = 20;
	int b = bitcount(x);

	printf("%d\n", b);

	return 0;
}
