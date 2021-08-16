#include <stdio.h>

/* Histogram for the length of words inputted */

main() {
	int c, i, w, wLength[10];

	for (i = 0; i < 10; i++)
		wLength[i] = 0;

	w = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t'){
			++wLength[w-1];
			w = 0;
		} else
			w++;
	putchar('\n');
	for (i = 0; i < 10; i++){
		printf("%d: ", i+1);
		for (w = 0; w < wLength[i]; w++)
			putchar('=');
		printf("\n");
	}
}
