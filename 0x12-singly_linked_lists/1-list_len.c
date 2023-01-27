#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements of a list of type list_t
 * @h: pointer to the struct list_t
 *
 * Return: number of nodes of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t eleCounter = 0;
	/** counts the number of elements in the linked list*/
	if (h == NULL)
		return (eleCounter);

	while (h)
	{
		++eleCounter;
		h = h->next;
	}
	return (eleCounter);
}
