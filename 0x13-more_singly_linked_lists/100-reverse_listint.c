#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reversees a linked list of listint_t type
 * @head: pointer to the beginning of the linked list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_crawler, *node_temp;

	if (*head == NULL)
		return (NULL);

	node_crawler = *head;

	if (node_crawler->next == NULL)
		return (*head);
	*head = node_crawler->next;
	node_crawler->next = NULL;
	node_temp = node_crawler;
	node_crawler = *head;


	while (node_crawler->next != NULL)
	{
		*head = node_crawler->next;
		node_crawler->next = node_temp;
		node_temp = node_crawler;
		node_crawler = *head;
	}
	node_crawler->next = node_temp;
	return (*head);
}
