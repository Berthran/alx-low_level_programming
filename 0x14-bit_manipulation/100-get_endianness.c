/* CODE to implement a program to get the endianess of a machine */

#include "main.h"


/**
 * get_endianness - checks the endianess of a machine
 *
 * Return: 0 if big endian, 1 if little endianness
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
