#include <stdio.h>

// prints Fahrenheit to Celsius table

float fahrToCel(float f);

main(){
	float fahr=0, //Fahrenheit varible starts at lower limit
	    cel, //Celsius varible
	    upper=300, //The upper limit
	    step=20; //Step size
	printf("Fahrenheit-Celsius Table\n%3s %6s\n", "F", "C");
	while(fahr <= upper){
		cel=fahrToCel(fahr);
		printf("%3.0f %6.1f\n", fahr, cel);
		fahr+=step;
	}
}

float fahrToCel(float f) {
	return ((5.0/9.0) * (f-32.0));
}
