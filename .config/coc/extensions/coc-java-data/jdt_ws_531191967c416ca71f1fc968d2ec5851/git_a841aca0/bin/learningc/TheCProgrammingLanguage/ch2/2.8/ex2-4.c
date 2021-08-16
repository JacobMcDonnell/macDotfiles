#include <stdio.h>
#include <stdbool.h>

#define MAXLINES 1000

void squeeze(char s1[], char s2[]);
void getline(char s[]);

bool none;

int main()
{
	char line[MAXLINES], rmline[MAXLINES];
	extern bool none;
	printf("Input a string: ");
	getline(line);
	printf("Input a string of characters to remove: ");
	getline(rmline);
	squeeze(line, rmline);
	if (none)
		printf("%d\n", -1);
	else
		printf("%s\n", line);
	return 0;
}

/* squeeze: removes any character s1 that matches a character in s2 */
void squeeze (char s1[], char s2[])
{
	int i, k, o, h;
	extern bool none;
	for (i = o = 0; s1[i] != '\0'; i++) {
		for (k = h = 0; s2[k] != '\0'; k++)
			if (s1[i] == s2[k])
				h--;
		if (h == 0)
			s1[o++] = s1[i];
	}
	s1[o] = '\0';
	if (i == o)
		none = true;
}

void getline(char s[])
{
	int c, i;
	for (i = 0; i < MAXLINES - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	s[i] = '\0';
}
