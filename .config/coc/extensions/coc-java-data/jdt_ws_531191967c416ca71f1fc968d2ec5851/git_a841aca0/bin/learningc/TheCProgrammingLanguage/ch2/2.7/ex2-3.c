/* This program converts hexadecimal to decimal integers */
#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define MAXLINE 1000

int htoi(void);
void getHex(void);
int convert(char s);

char line[MAXLINE];
int len;

int main(void)
{
	int dec;
	extern char line[];
	printf("Enter a hexadecimal number: ");
	getHex();
	dec = htoi();
	if (dec < 0)
		printf("INVALID CHARACTERS INPUTED\n");
	else
		printf("%s is %d in decimal.\n", line, dec);
	return 0;
}

/* gets input of hex */
void getHex(void)
{
	int c, i;
	extern int len;
	extern char line[];
	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	line[i] = '\0';
	len = i;
}

/* converts from a hexadecimal to a decimal */
int htoi(void)
{
	extern char line[];
	extern int len;
	int i, c, d, f;
	c = 0;
	if (line[0] == '0' && (line[1] == 'x' || line[1] == 'X')) {
		d = 1;
		f = len - 2;
	} else {
		d = -1;
		f = len;
	}
	int h[f];
	for (i = len - 1; i > d; i--) {
		h[c] = convert(line[i]);
		c++;
	}
	d = 0;
	for (i = 0; i < f; i++)
		d += h[i] * pow(16,i);
	return d;
}

/* converts from ascii to each character's hex value: f becomes 15 */
int convert(char s)
{
	if (isdigit(s))
		return (s - '0');
	else if (s >= 'A' && s <= 'F')
		return (s - 'A' + 10);
	else if (s >= 'a' && s <= 'f')
		return (s - 'a' + 10);
	else
		return -1;
}
