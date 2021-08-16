#include "main.h"
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int ex27()
{
	unsigned x = 23587, ans;
	int p = 9, n = 3;
	ans = invert(x, p, n);
	printf("%u\n", ans);
	return 0;
}

unsigned invert(unsigned x, int p, int n)
{
	int rN = ~(~0 << n),
		nD = (p+1-n),
		m = rN << nD,
		a = x & m,
		b;
	a = ~a;
	a = a & m;
	b = x & ~m;
	return a | b;
}