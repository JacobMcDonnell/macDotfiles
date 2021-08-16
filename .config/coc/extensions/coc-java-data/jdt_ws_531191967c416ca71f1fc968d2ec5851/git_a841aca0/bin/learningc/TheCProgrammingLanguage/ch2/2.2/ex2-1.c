#include <stdio.h>
#include <limits.h>

main(void)
{
	printf("The min value for signed chars is %d, the max is %d.\nThe min value for unsigned chars is %d, the max is %d.\nThe min value for signed shorts is %d, the max is %d.\nThe min value for unsigned shorts is %d, the max is %d.\nThe min value for signed ints is %d, the max is %d.\nThe min value for unsigned ints is %d, the max is %d.\nThe min value for signed longs is %d, the max is %d.\nThe min value for unsigned longs is %d, the max is %d.\n",SCHAR_MIN, SCHAR_MAX, 0, UCHAR_MAX,SHRT_MIN, SHRT_MAX, 0, USHRT_MAX,INT_MIN, INT_MAX, 0, UINT_MAX,LONG_MIN, LONG_MAX, 0, ULONG_MAX);
}
