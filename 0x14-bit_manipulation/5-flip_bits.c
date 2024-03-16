/* CODE to implement the number of bits to flip */
/* to get from one number to another 0 */

#include "main.h"


/**
 * flip_bits - counts the number of bits to flip to convert n to m
 * @n: the decimal number to flip
 * @m: the decimal number to be converted to
 *
 * Return: number of bits flipped to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int XOR_bits;
	unsigned long int AND_bits;

	XOR_bits = n ^ m;

	while (XOR_bits != 0)
	{
		AND_bits = XOR_bits & 1;
		if (AND_bits == 1)
			++count;
		XOR_bits = XOR_bits >> 1;
	}
	return (count);
}
