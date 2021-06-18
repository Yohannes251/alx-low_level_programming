#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints the alphabet in lowercase in reverse
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
