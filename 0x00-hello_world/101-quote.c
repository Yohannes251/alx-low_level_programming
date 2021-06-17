#include <stdio.h>

/**
 * main - prints a string to the standard error
 * Return: Returns 1 if the code executes
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, + 
2015-10-19\n", 59, 1, stderr);
	return (1);
}
