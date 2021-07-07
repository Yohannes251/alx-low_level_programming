#include "holberton.h"

/**
 * _pow_recursion - computes factorial of an integer
 * @x: base integer
 * @y: power integer
 * Return: returns the value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int a;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		a = x * _pow_recursion(x, y - 1);
	}
	return (a);
}
