#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function gets last digit of a number,
 * compares its result and prints a string accordingly
 * Return: returns 0 if the function runs smoothly
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d", n, "is %d", lastDigit, +
		       "and is greater than 5");
	else if (lastDigit == 0)
		printf("Last digit of %d", n, "is %d", lastDigit, "and is 0");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d", n, "is %d", lastDigit, +
		       "and is less than 6 and not 0");
}
