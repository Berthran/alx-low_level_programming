#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to beginning of linked list
 * @head: pointer to head of the linked list
 * @n: new node's integer value
 *
 * Return: pointer to head of new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL || new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
