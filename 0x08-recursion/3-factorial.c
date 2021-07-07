#include "holberton.h"

/**
 * factorial - computes factorial of an integer
 * @n: integer to be computed
 * Return: returns the factorial of n
 */
int factorial(int n)
{
	int a;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
