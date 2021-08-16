#include <stdio.h>

#define MAXLINES 1000

int any(char s1[], char s2[]);
void getline(char s[]);

int main()
{
	char line[MAXLINES], rmline[MAXLINES];
	int i;
	printf("Input a string: ");
	getline(line);
	printf("Input a string of characters to find: ");
	getline(rmline);
	i = any(line, rmline);
	printf("%d\n", i);
	return 0;
}

/* any: returns the first position of any character in s2 found in s1 */
int any (char s1[], char s2[])
{
	int i, k, h;
	h = -1;
	for (i = 0; s1[i] != '\0'; i++) {
		for (k = 0; s2[k] != '\0'; k++)
			if (s1[i] == s2[k]) {
				h = i;
				break;
			}
		if (h > -1)
			break;
	}
	return h;
}

void getline(char s[])
{
	int c, i;
	for (i = 0; i < MAXLINES - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	s[i] = '\0';
}