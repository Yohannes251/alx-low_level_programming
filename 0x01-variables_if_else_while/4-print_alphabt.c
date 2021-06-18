#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints lowercase alphabets except e and q
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		if (!(x == 'e') && !(x == 'q'))
			putchar(x);
	}
	putchar('\n');
	return (0);
}
