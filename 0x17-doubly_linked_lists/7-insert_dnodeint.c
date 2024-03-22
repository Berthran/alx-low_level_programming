#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * insert_dnodeint_at_0 - inserts a node at the index 0
 * @h: the beginning of the list
 * @new_node: the address of the new node
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_0(dlistint_t **h, dlistint_t **new_node)
{
	dlistint_t *head_crawler;

	head_crawler = *h;
	(*new_node)->prev = NULL;
	(*new_node)->next = head_crawler;
	if (head_crawler != NULL)
		head_crawler->prev = *new_node;
	*h = *new_node;
	return (*new_node);
}

/**
 * insert_dnodeint_at_mid - inserts a node in between the end and beginning
 * @h: the beginning of the list
 * @new_node: the address of the new node
 * @idx: the position to insert the new node at
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_mid(dlistint_t **h, dlistint_t **new_node,
		unsigned int idx)
{
	dlistint_t *head_crawler, *prev_node;
	unsigned int node = 0;

	head_crawler = *h;

	while (head_crawler != NULL)
	{
		prev_node = head_crawler;
		head_crawler = head_crawler->next;
		++node;
		if (node == idx)
		{
			(*new_node)->prev = prev_node;
			(*new_node)->next = head_crawler;
			prev_node->next = *new_node;
			head_crawler->prev = *new_node;
			return (*new_node);
		}
	}
	return (NULL);
}

/**
 * insert_dnodeint_at_end - inserts a node at the end of the DLL
 * @h: the beginning of the list
 * @new_node: the address of the new node
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_end(dlistint_t **h, dlistint_t **new_node)
{
	dlistint_t *head_crawler;

	head_crawler = *h;

	while (head_crawler->next != NULL)
		head_crawler = head_crawler->next;
	(*new_node)->prev = head_crawler;
	head_crawler->next = *new_node;
	(*new_node)->next = NULL;
	return (*new_node);
}

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
	dlistint_t *new_dlistint_t;/* *head_crawler;*/
	unsigned int no_of_nodes;

	new_dlistint_t = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (h == NULL || new_dlistint_t == NULL)
		return (NULL);

	no_of_nodes = count_dlistint_nodes(*h);
	new_dlistint_t->n = n;

	/* Handle insertion at beginning of the DLL */
	if (idx == 0)
	{
		new_dlistint_t = insert_dnodeint_at_0(h, &new_dlistint_t);
		return (new_dlistint_t);
	}

	/* Handle insertion between beginning and end of the DLL */
	else if (idx > 0 && idx < no_of_nodes)
	{
		new_dlistint_t = insert_dnodeint_at_mid(h, &new_dlistint_t, idx);
		return (new_dlistint_t);
	}

	/* Handle insertion at the end of the DLL */
	else if (idx == no_of_nodes)
	{
		new_dlistint_t = insert_dnodeint_at_end(h, &new_dlistint_t);
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
