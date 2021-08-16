#include "main.h"
#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int ex28()
{
	unsigned x = 23587, ans;
	int n = 3;
	ans = rightrot(x, n);
	printf("%u\n", ans);
	return 0;
}

unsigned rightrot(unsigned x, int n)
{
	int rN = ~(~0 << n),
		c = x & rN,
		cs = c << (16 - n),
		s = x >> n;
	return s | cs;
}