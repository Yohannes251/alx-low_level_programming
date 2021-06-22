#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 */
void print_alphabet_x10(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
		y++;
	}
}
