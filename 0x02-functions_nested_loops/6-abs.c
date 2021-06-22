#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: returns 1 for success
 * @c: is the integer to be computed
 */
int _abs(int c)
{
	int ch;

	if (c >= 0)
		_putchar(c);
	else
	{
		ch = c * -1;
		_putchar(ch);
	}
	return (0);
	_putchar('\n');
}
