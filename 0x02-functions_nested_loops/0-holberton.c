#include "holberton.h"

/**
 * main - prints a string by using while loop
 * Return: returns 0 on success
 */
int main(void)
{
	int i = 0;
	char c[] = "Holberton";

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
