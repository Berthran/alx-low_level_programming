#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_unit - converts a binary number to a positive integer
 * @b: pointer to a string of 0s and 1s
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_length, power;
	unsigned int dec = 0;
	int noneBin = 0, i;

	if (b == NULL)
		return (0);

	bin_length = strlen(b);
	power = bin_length - 1;

	for (i = 0; i < bin_length; i++)
	{
		if (b[i] == '0' || b[i] == 1)
		{
			dec += atoi(b[i]) * (2 ** (power - i));
		}
		else
			return (0);
	}
	return (dec);
}
