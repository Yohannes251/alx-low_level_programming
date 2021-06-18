#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints the alphabet in lower case
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	for (int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
