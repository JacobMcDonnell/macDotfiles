#include <stdio.h>

#define LOWER 0 	/* Lower limit of the table */
#define UPPER 300 	/* Upper limit of the table */
#define STEP 20 	/* Step size */

main() {
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
