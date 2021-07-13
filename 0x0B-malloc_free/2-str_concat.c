#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenaste two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	char *str;

	while (s1 && *s1++)
		length1++;
	while (s2 && *s2++)
		length2++;
	ret = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!ret)
		return (NULL);
	str += length1 + length2;
	*str = '\0';
	for (s2--; length2--;)
		*--str = *--s2;
	for (s1--; length1--;)
		*--str = *--s1;
	return (str);
}
