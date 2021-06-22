#include "holberton.h"
/**
 * main - prints alphabet in lower case
 * Return: Returns 0 upon success
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
