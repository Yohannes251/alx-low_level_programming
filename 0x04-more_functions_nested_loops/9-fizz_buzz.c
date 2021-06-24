#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * Multiples of 3 will be named Fizz
 * Multiples of 5 will be named Buzz
 * Multiples of both 3 & 5 will be named FizzBuzz
 * Return: Returns 0 for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
