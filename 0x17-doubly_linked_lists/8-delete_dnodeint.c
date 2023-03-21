#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index 'index' of a dlist
 * @head: beginning of the list
 * @index: position of the node to delete
 *
 * Return: 1 if successful or -1 if unsuccessful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_crawler, *node_to_del;
	unsigned int i = 0;
	dlistint_t *nodes_after = NULL;

	node_crawler = *head;

	if (*head == NULL)
		return (-1);
	if (del_dlist_beginning(&(*head), index) == 0)
		return (1);
	while (i < (index - 1))
	{
		if (node_crawler->next == NULL)
			return (-1);
		node_crawler = node_crawler->next;
		++i;
	}
	node_to_del = node_crawler->next;

	if (node_to_del->next)
		nodes_after = node_to_del->next;
	node_crawler->next = nodes_after;
	if (nodes_after)
		nodes_after->prev = node_crawler;
	free(node_to_del);
	return (1);
}

/**
 * del_dlist_beginning - deletes first node
 * @head: the beginning of the dlist
 * @index: index of node to delete
 *
 * Return: 0 if successful, 1 if unsuccessful
 */

int del_dlist_beginning(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_crawler = *head;

	if (index == 0)
	{
		*head = node_crawler->next;
		node_crawler->next = NULL;
		if (*head)
			(*head)->prev = NULL;
		free(node_crawler);
		return (0);
	}
	return (1);
}