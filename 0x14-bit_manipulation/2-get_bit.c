/* CODE to implement extracting the value of a bit at a given position */

#include "main.h"

/**
 * get_bit - uses an index to locate a bit
 * @n: the decimal number
 * @index: the position of the bit of interest
 *
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*size_t index_range = get_index_of_msb(n);*/

	if (index > 63)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return ((n >> index) & 1);
}
