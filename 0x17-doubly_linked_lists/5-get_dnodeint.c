#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index position 'index'
 * @head: the dlist header
 * @index: the index position of interest node
 *
 * Return: the integer value of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *dlist_ptr;
	size_t nodes_count = 0;

	if (head == NULL)
		return (0);

	dlist_ptr = head;
	while (dlist_ptr != NULL)
	{
		if (nodes_count == index)
			return (dlist_ptr);
		dlist_ptr = dlist_ptr->next;
		nodes_count += 1;

	}
	return (NULL);
}
