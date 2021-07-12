#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: pointer to string array
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
