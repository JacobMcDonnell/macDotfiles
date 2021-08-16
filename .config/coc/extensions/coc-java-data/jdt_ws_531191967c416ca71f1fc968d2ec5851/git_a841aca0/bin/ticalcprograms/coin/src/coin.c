#include <tice.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EnterKey 5
#define ExitKey 9

int coinFlip(void);

int main()
{

	while (true) {
		os_ClrHome();

		printf("Coin Flip\nPress Enter to Flip\nPress Clear to exit\n");

		int key = os_GetKey();

		if (key == ExitKey)
			break;
		int coin = coinFlip();
		if (coin == 0)
			printf("Heads");
		else if (coin == 1)
			printf("Tails");

		while (!os_GetCSC());
	}

	return 0;
}

int coinFlip(void)
{
	time_t t;

	srand((unsigned) time(&t));
	return (rand() % 2);
}
