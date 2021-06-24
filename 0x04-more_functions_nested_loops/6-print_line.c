#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: number of times the character is printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
