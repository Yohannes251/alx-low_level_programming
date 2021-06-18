#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints single digit numbers
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
