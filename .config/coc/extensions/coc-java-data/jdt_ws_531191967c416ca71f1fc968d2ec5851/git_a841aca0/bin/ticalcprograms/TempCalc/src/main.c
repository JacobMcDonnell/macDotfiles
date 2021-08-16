#include <tice.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EnterKey 5
#define maxline 22

double fToC(double fahr);
double cToF(double cel);
double fToK(double fahr);
double kToF(double kel);
double getInput(void);
void output(int operation);

int main(void)
{
	while(true) {
		os_ClrHome();

		printf("TempCalc\nSelect:\n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n3. Fahrenheit to Kelvin\n4. Kelvin to Fahrenheit\n5. Exit");
		uint16_t key = os_GetKey();

		if(key == 147)
			break;

		output(key);
		/* Waits for a key press */
		while (!os_GetCSC());
	}
	os_ClrHome();
	return 0;
}

void output(int operation)
{
	os_ClrHome();
	double value = 0.0;
	switch(operation) {
		case 143:
			printf("Fahrenheit to Celsius\n");
			value = fToC(getInput());
			break;
		case 144:
			printf("Celsius to Fahrenheit \n");
			value = cToF(getInput());
			break;
		case 145:
			printf("Fahrenheit to Kelvin\n");
			value = fToK(getInput());
			break;
		case 146:
			printf("Kelvin to Fahrenheit \n");
			value = kToF(getInput());
			break;
		default: printf("Invalid");
	}
	printf("\nOutput: %f", value);
}

double getInput(void)
{
	uint8_t key, i = 0;
	char number[maxline];
	char *eptr;
	double value = 0.0;

	printf("Input: ");
	while((key = os_GetKey()) != EnterKey) {
		if(key == 141 || key == 140)
			key--;
		number[i] = (key - 142) + '0';
		printf("%c", number[i++]);
	}
	number[i] = '\0';
	value = strtod(number, &eptr);
	return value;
}

double fToC(double fahr)
{
	double cel = 0;
	cel = (5.0 / 9.0) * (fahr - 32.0);
	return cel;
}

double fToK(double fahr)
{
	double kel = 0;
	kel = fToC(fahr) + 273;
	return kel;
}

double cToF(double cel)
{
	double fahr = 0;
	fahr = (cel * (9.0 / 5.0)) + 32.0;
	return fahr;
}

double kToF(double kel)
{
	double fahr = 0;
	fahr = cToF(kel - 273);
	return fahr;
}
