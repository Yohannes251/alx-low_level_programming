#include "search_algos.h"

/**
 * print_array - Prints the current array being searched
 * @arr: Pointer to the current array
 * @left: Left most index of array
 * @right: Right most index of array
 * Return: Returns nothing
 */

void print_array(int *arr, size_t left, size_t right);

void print_array(int *arr, size_t left, size_t right)
{
	size_t i = 0;

	for (i = left; i <= right; i++)
	{
		if (i == left)
			printf("Searching in array: ");
		if (i == right)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the array to be searched
 * @size: Size of the array
 * @value: The value to be searched
 * Return: -1 if Array is Null or index of the value found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

