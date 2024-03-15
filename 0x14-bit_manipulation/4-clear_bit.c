/* CODE to implement setting the value of a bit at a given position to 0*/

#include "main.h"


/**
 * clear_bit - uses an index to locate a bit and change its value to 0
 * @n: the decimal number
 * @index: the position of the bit of interest
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c = *n;

	/* Error: index beyond 64 bits */
	if (index > 63)
		return (-1);
	/* Sets bit at [index] to zero if it is 1 or 1 if it is zero*/
	c = c ^ (1 << index);
	/* Set bit at [index] to zero */
	*n = *n & c;
	return (1);
}
