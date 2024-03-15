/* CODE to implement setting the value of a bit at a given position to 1*/

#include "main.h"


/**
 * set_bit - uses an index to locate a bit and change its value to 1
 * @n: the decimal number
 * @index: the position of the bit of interest
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c = *n;

	/* Error: index beyond 64 bits */
	if (index > 63)
		return (-1);
	/* Move bit at position [index] to position [0] */
	c = c >> index;
	/* Set bit to 1 */
	c = c | 1;
	/* Move set bit at position [0] back to position [index] */
	c = c << index;
	/* Set the bit in the parent decimal */
	*n = c | *n;
	return (1);
}
