#include <stdio.h>

/* prints Celsius-Fahrenheit table */

main() {
	int cel, /* Celsius Varible */
	    upper = 300,
	    step = 20;
	printf("Celsius-Fahrenheit Table\n%3s %6s\n", "C", "F");
	while (cel <= upper){
		printf("%3d %6.1f\n", cel, (cel * (9.0 / 5.0)) + 32.0);
		cel += step;
	}
}
