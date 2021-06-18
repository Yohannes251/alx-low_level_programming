#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints all numbers of base16
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int x;
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (x = 'A'; x <= 'f'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
