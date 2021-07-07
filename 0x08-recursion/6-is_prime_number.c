#include "holberton.h"
/**
 * prime - checks if number is prime
 * @a:  first integer parameter
 * @j:  second integer parameter
 * Return: 1 if prime, 0 if not
 */
int prime(int a, int j)
{
	if (j < 2 || j % a == 0)
	{
		return (0);
	}
	else if (a > j / 2)
	{
		return (1);
	}
	else
	{
		return (prime(a + 1, j));
	}
}

/**
 * is_prime_number - states if number is prime
 * @n: integer to be checked
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(2, n));
}
