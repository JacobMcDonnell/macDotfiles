#include <stdio.h>
#include "lower.c"

int main()
{
	int b = 'b', c = 'C';
	printf("%c\n%c\n", lower(b), lower(c));
	return 0;
}
