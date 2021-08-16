#include <tice.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EnterKey 5
#define maxline 22

double lbsToG(double lbs);
double gToLbs(double gram);
double ozToG(double oz);
double gToOz(double gram);
double ozToLbs(double oz);
double lbsToOz(double lbs);
double getInput(void);
void output(int operation);

int main(void)
{
	while(true) {
		os_ClrHome();

		printf("MassCalc\nSelect:\n1. Pounds to Grams\n2. Grams to Pounds\n3. Ounces to Grams\n4. Grams to Ounces\n5. Pounds to Ounces\n6. Ounces to Pounds\n7. Exit");
		uint16_t key = os_GetKey();

		if(key == 149)
			break;

		output(key);
		/* Waits for a key press */
		while (!os_GetCSC());
	}
	return 0;
}

void output(int operation)
{
	os_ClrHome();
	double value = 0.0;
	switch(operation) {
		case 143:
			printf("Pounds to Grams\n");
			value = lbsToG(getInput());
			break;
		case 144:
			printf("Grams to Pounds\n");
			value = gToLbs(getInput());
			break;
		case 145:
			printf("Ounces to Grams\n");
			value = ozToG(getInput());
			break;
		case 146:
			printf("Grams to Ounces\n");
			value = gToOz(getInput());
			break;
		case 147:
			printf("Pounds to Ounces\n");
			value = lbsToOz(getInput());
			break;
		case 148:
			printf("Ounces to Pounds\n");
			value = ozToLbs(getInput());
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

double lbsToG(double lbs)
{
	double gram = 0;
	gram = lbs * 453.59237;
	return gram;
}

double gToLbs(double gram)
{
	double lbs = 0;
	lbs = gram / 453.59237;
	return lbs;
}

double ozToG(double oz)
{
	double gram = 0;
	gram = lbsToG(ozToLbs(oz));
	return gram;
}

double gToOz(double gram)
{
	double oz = 0;
	oz = lbsToOz(gToLbs(gram));
	return oz;
}

double lbsToOz(double lbs)
{
	double oz = 0;
	oz = lbs * 16;
	return oz;
}

double ozToLbs(double oz)
{
	double lbs = 0;
	lbs = oz / 16;
	return lbs;
}

