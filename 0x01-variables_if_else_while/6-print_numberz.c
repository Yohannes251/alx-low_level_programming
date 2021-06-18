#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints single digit numbers
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
