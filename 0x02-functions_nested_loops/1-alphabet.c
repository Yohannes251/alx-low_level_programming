#include "holberton.h"
/**
 * main - prints alphabet in lower case
 * Return: Returns 0 upon success
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
