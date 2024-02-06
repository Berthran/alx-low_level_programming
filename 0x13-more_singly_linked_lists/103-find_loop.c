#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the beginning of the linked list
 *
 * Return: the address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_temp = NULL;

	if (head == NULL)
		return (NULL);

	node_temp = head;

	while (head != NULL && head <= node_temp)
	{
		node_temp = head;
		head = head->next;
	}
	if (head != NULL)
		return (head);
	return (NULL);
}
