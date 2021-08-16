#include <stdio.h>
#include <string.h>

#define FIZZ 3 		/* The factor that will output FIZZ */
#define BUZZ 5 		/* The factor that will output BUZZ */
#define UPPER 1000 	/* The max number that the program will run to */
#define START 1 	/* The number the program starts on */
#define STEP 1 		/* The number the program increases by */

int main (){
	for (int i = START; i <= UPPER; i += STEP){
		char output[8] = "";
		if ((i%FIZZ) == 0)
			strcat(output, "FIZZ");
		if ((i%BUZZ) == 0)
			strcat(output, "BUZZ");
		if (strcmp(output, "") == 0)
			printf("%d", i); /* This is a work around because I don't know how to convert an int to a char */
		printf("%s\n", output);
	}
	return 0;
}
