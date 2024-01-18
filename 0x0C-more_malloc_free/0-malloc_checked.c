#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - assigbs memory using malloc
 * @b: amount of bytes to assign
 *
 * Return: pointer to memory address
 */

void *malloc_checked(unsigned int b)
{
	void *allmemb = malloc(b);

	if (allmemb == NULL)
		exit(98);
	return (allmemb);
}
