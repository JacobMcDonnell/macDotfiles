#include <stdio.h>

// prints Fahrenheit to Celsius table

main(){
	float fahr=0, //Fahrenheit varible starts at lower limit
	    cel, //Celsius varible
	    upper=300, //The upper limit
	    step=20; //Step size
	printf("Fahrenheit-Celsius Table\n%3s %6s\n", "F", "C");
	while(fahr <= upper){
		cel=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, cel);
		fahr+=step;
	}
}
