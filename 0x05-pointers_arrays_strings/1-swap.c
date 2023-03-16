#include "main.h"

/**
 * swap_int - swaps the value of two integer numbers
 * @a: first integer number
 * @b: second integer number
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int keep_a;

	keep_a = *a;
	*a = *b;
	*b = keep_a;
}
