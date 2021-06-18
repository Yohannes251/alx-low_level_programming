#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints single digit numbers separated by comma
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch <= '9')
		{
			putchar(ch);
			if (ch <= '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
