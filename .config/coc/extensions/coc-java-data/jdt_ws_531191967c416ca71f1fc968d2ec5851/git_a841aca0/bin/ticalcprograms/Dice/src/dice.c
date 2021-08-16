#include <tice.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EnterKey 5
#define maxline 22
#define ExitKey 9
#define ExitCode -1

int diceRoll(int sides);
int getInput(void);

int main(void)
{
	while (true) {
		os_ClrHome();

		printf("Dice Roll\nPress Clear to exit\nHow many sides?\nInput: ");

		int ans = diceRoll(getInput());

		if (ans == ExitCode)
			break;

		printf("\nOutput: %d", ans);

		while (!os_GetCSC());
	}
	return 0;
}

int diceRoll(int sides)
{
	if (sides == ExitCode)
		return ExitCode;
	time_t t;
	srand((unsigned) time(&t));
	return (rand() % sides) + 1;
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
