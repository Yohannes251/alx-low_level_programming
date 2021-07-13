#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: pointer to the string to be copied
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	c = malloc(i * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
