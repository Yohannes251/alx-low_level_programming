#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers 0 - 14
 */
void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		if (i == 1)
			for (j = 0; j <= 4; j++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
			}
		_putchar('\n');
	}
}
