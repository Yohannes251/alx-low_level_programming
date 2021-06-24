#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *@n: number of times the character is printed
 */
void print_diagonal(int n)
{
	int i, j;

	j = 0;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
