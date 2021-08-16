#include <tice.h>
#include <stdio.h>
#include <stdlib.h>

#define EnterKey 5
#define maxline 50
#define ExitKey 9

int fib(long num);

int main(void)
{
	while(true) {
		os_ClrHome();

		char number[maxline];
   		char *ptr;

		printf("FibFinder\nPress Clear to exit\nInput: ");
		int16_t key, i = 0;
		long output = -1;

		while((key = os_GetKey()) != EnterKey) {
			if(key == ExitKey)
				return 0;
			number[i] = (key - 142) + '0';
			printf("%c", number[i++]);
		}

   		output = strtol(number, &ptr, 10);
		printf("\nOutput: %d", fib(output));

		while(!os_GetCSC());
	}
	return 0;
}

int fib(long num)
{
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
		return fib(num-1) + fib(num-2);
}
