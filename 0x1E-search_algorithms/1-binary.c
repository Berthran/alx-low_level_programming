#include <stdio.h>


/**
 * print_array - prints the items in an array
 * @array: pointer to the first element of the array to search in
 * @start: the beginning of the array
 * @end: the end of the array
 *
 * Return: nothing
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	while (i < end)
	{
		printf("%d, ", array[i]);
		++i;
	}
	printf("%d\n", array[i]);
}


/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if value is
 * not present in array of if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, i = 0;

	if (array != NULL)
	{
		do {
			mid = (high + low) / 2;
			printf("Searching in array: ");
			print_array(array, low, high);

			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
			{
				high = mid - 1;
			}
			else if (array[mid] < value)
			{
				low = mid + 1;
			}
			i++;
		} while (low <= high);
	}
	return (-1);
}
