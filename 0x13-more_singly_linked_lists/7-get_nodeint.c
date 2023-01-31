#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - access the node at index number
 * @index: position of node in the linked list
 *
 * Return: the node at index 'index'
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node_crawler;

	if (head == NULL)
		return (NULL);

	node_crawler = head;
	i = 0;

	while(i < index)
	{
		if (node_crawler->next)
		{
			node_crawler = node_crawler->next;
			++i;
		}
		else
			return (NULL);
	}
	return (node_crawler);
}

