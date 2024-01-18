#include "main.h"
#include <stdlib.h>

/**
 * _calloc - mimics the calloc function of C standard library
 * @nmemb: number of elements in the array
 * @size: bytes size of each element in the array
 *
 * Return: a void pointer on success or NULL on failure 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr = NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
