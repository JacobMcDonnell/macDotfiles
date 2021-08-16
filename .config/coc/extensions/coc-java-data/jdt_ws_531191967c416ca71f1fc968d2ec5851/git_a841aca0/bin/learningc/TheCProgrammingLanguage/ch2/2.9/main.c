#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("1. ex2-6\n2. ex2-7\n3. ex2-8\n");
	int c;
	c = getchar();
	if (c == '1')
		ex26();
	else if (c == '2')
		ex27();
	else if (c == '3')
		ex28();
	return 0;
}