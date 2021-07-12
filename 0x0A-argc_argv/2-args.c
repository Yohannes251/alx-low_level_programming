#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: pointer to string array
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
