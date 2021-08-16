#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int c;
	time_t t;
	
	srand((unsigned) time(&t));

	c = rand() % 2;
	
	if (c == 0)
		printf("Tails\n");
	else
		printf("Heads\n");
	
	return 0;
}
