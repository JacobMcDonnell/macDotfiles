#include <tice.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EnterKey 5
#define maxline 22
#define ExitKey 9
#define ExitCode -1

int rng(int min, int max);
int getInput(void);

int main(void)
{
	while (true) {
		os_ClrHome();

		int min, max;
		printf("Random Number\nPress Clear to exit\nMinimun: ");
		if ((min = getInput()) == ExitCode)
			break;
		printf("\nMaximum: ");
		if ((max = getInput()) == ExitCode)
			break;
		printf("\n%d", rng(min, max));

		while (!os_GetCSC());
	}
}

int getInput(void)
{
	char number[maxline];
	char *ptr;
	int16_t key, i = 0, output;
	while((key = os_GetKey()) != EnterKey) {
		if(key == ExitKey)
			return ExitCode;
		number[i] = (key - 142) + '0';
		printf("%c", number[i++]);
	}
	output = strtol(number, &ptr, 10);
	return output;
}

int rng(int min, int max)
{
	time_t t;
	srand((unsigned) time(&t));
	return (rand() % (max - min)) + min;
}
