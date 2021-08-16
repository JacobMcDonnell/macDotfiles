#include "main.h"
#include <stdio.h>

unsigned setbits(unsigned x, int n, int p, unsigned y);

int ex26()
{
	unsigned x = 23587;
	unsigned y = 54635;
	int p = 8, n = 3;
	unsigned ans = setbits(x, n, p, y);
	printf("%u\n", ans);
	return 0;
}

unsigned setbits(unsigned x, int n, int p, unsigned y)
{
	int rN, nD, m, a, b;
	rN = ~(~0 << n);
	nD = (p+1-n);
	m = ~(rN << nD);
	a = x & m;
	b = y & rN;
	b = b << nD;
	return a | b;
}