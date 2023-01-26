#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list of type list_t
 * @h: pointer to the struct list_t
 *
 * Returns: number of nodes of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t eleCounter = 0; 
	// counts the number of elements in the linked list
	
	while (h->next)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			++eleCounter;
		}
		else
		{
			printf("[0] (nil)\n");
			++eleCounter;
		}
		h = h->next;
	}
	return (eleCounter);
}
