#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position to a dlist
 * @h: the beginning of the dlist
 * @idx: position to insert new node at
 * @n: integer value of new node
 *
 * Return: address of new dlist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_dlistint_t, *head_crawler, *prev_node;
	unsigned int no_of_nodes, node = 0;
	new_dlistint_t = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (h == NULL || new_dlistint_t == NULL)
		return (NULL);

	no_of_nodes = count_dlistint_nodes(*h);
	new_dlistint_t->n = n;
	head_crawler = *h;

	if (idx == 0)
	{
		new_dlistint_t->prev = NULL;
		new_dlistint_t->next = *h;
		*h = new_dlistint_t;
		return (new_dlistint_t);
	}

	else if (idx > 0 && idx < no_of_nodes)
	{
		while (head_crawler != NULL)
		{
			prev_node = head_crawler;
			head_crawler = head_crawler->next;
			node += 1;
			if (node == idx)
			{
				new_dlistint_t->prev = prev_node;
				new_dlistint_t->next = head_crawler;
				prev_node->next = new_dlistint_t;
			}
		}
		return (*h);
	}
	else if (idx == no_of_nodes)
	{
		while (head_crawler->next != NULL)
			head_crawler = head_crawler->next;
		new_dlistint_t->prev = head_crawler;
		head_crawler->next = new_dlistint_t;
		new_dlistint_t->next = NULL;
		return (new_dlistint_t);
	}
	return (NULL);
}

/**
 * count_dlistint_nodes - count no of nodes in a dlist
 * @head: the beginnig of the node
 *
 * Return: the number of nodes counted
 */

size_t count_dlistint_nodes(dlistint_t *head)
{
	dlistint_t *dlist_ptr;
	size_t nodes_count = 0;

	if (head == NULL)
		return (0);

	dlist_ptr = head;

	while (dlist_ptr != NULL)
	{
		dlist_ptr = dlist_ptr->next;
		nodes_count += 1;
	}
	return (nodes_count);
}
