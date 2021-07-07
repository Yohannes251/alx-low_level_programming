#include "holberton.h"

/**
 *sqrt_recurse - recursive function to obtain square root
 *@n: integer to be computed
 *@c: integer to aid the computation
 * Return: returns the square root of n
 */
int sqrt_recurse(int n, int c)
{
	int sqrt;

	sqrt = c * c;
	if (n - sqrt == 0)
		return (c);
	else if (n < sqrt)
		return (-1);
	return (sqrt_recurse(n, ++c));
}

/**
 *_sqrt_recursion - main function that tests cases
 *@n: integer to be computed
 * Return: Returns final answer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_recurse(n, 2));
}
