#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: special character
 * Return: Returns 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	str[0] = c;
	if (size == 0 || str == 0)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
