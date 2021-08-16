#include <stdio.h>

/* prints Celsius-Fahrenheit table */

main(){
	int fahr = 0, /* Fahrenheit Varible */
	    upper=300, /* Max value */
	    step=20; /* Step Size */
	printf("Fahrenheit-Celsius Table\n%3s %6s\n", "F", "C");
	while (fahr <= upper){
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
		fahr += step;
	}
}
