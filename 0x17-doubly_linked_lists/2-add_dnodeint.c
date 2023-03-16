#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: the beginning of the dlist
 * @n: integer value of new node
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dlistint_t;

	if (head == NULL)
		return (NULL);

	new_dlistint_t = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_dlistint_t == NULL)
		return (NULL);

	new_dlistint_t->n = n;
	new_dlistint_t->next = *head;
	new_dlistint_t->prev = NULL;
	*head = new_dlistint_t;
	return (new_dlistint_t);
}
