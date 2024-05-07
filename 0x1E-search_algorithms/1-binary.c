#include "search_algos.h"
/**
 * print_certain_numbers - print the array being searched every time.
 * @array: the array to be printed
 * @start: index to start the array
 * @end: number of elements in the array
 */
void print_certain_numbers(int *array, size_t start, size_t end)
{
	size_t index;

	printf("Searching in array: ");

	index = start;

	while (array && index < end)
	{
		if (index > start)
		{
			printf(", ");
		}
		printf("%d", array[index]);
		index++;
	}
	printf("\n");
}



/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or return
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	print_certain_numbers(array, left, size);

	while (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] > value)
		{
			right = mid;
			print_certain_numbers(array, left, right);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
			print_certain_numbers(array, left, size);
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
