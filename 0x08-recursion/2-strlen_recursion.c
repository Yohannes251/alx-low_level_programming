#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: pointer to character
 * Return: returns the length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
