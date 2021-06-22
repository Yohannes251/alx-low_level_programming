#include "holberton.h"

/**
* print_last_digit - Prints the last digit of a number
* Return: returns the last digit
* @n: input number as an integer.
*/
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
	return (0);
	_putchar('\n');
}
