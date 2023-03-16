#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: the beginning of the dlist
 * @n: integer value of new node
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dlistint_t;
	dlistint_t *head_crawler;

	if (head == NULL)
		return (NULL);

	new_dlistint_t = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_dlistint_t == NULL)
		return (NULL);

	new_dlistint_t->n = n;
	new_dlistint_t->next = NULL;
	if (*head == NULL)
	{
		new_dlistint_t->prev = *head;
		*head = new_dlistint_t;
		return (*head);
	}
	head_crawler = *head;
	while (head_crawler->next != NULL)
		head_crawler = head_crawler->next;
	new_dlistint_t->prev = head_crawler;
	head_crawler->next = new_dlistint_t;
	return (*head);
}
