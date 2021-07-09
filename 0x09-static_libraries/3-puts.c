#include "holberton.h"

/**
 * _puts - prints a string to stdout
 * @s: string to be printed
 */
void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
