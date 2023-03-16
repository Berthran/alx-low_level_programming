#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node to list at position index
 * @head: beginning of list
 * @idx: index position of new node
 * @n: integer number of new node
 *
 * Return: pointer to begininng of update list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node_crawler;
	listint_t *nodes_after;
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	i = 0;

	new_node->n = n;
	new_node->next = NULL;
	node_crawler = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < (idx - 1))
	{
		if (node_crawler->next)
		{
			node_crawler = node_crawler->next;
			++i;
		}
		else
			return (NULL);
	}

	nodes_after = node_crawler->next;
	node_crawler->next = new_node;
	new_node->next =  nodes_after;
	return (new_node);
}
