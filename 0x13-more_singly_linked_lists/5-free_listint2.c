#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees up linked list memory and sets head to NULL
 * @head: pointer to beginning of list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;
	listint_t *h;

	if (head != NULL)
	{
		h = *head;
		while (h->next != NULL)
		{
			p = h;
			h = h->next;
			free(p);
		}
		free(h);
		*head = NULL;
	}
}
