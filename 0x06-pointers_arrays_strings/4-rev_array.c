#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of integers
 * @a: array if integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int _n = n - 1;
	int iter = n / 2;
	int i = 0;
	int int_holder;

	while (i < iter)
	{
		int_holder = *(a + i);
		*(a + i) = *(a + _n - i);
		*(a + _n - i) = int_holder;
		i++;
	}
}

