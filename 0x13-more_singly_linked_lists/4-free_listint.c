#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - frees up allocated memory of a list
 * @head: pointer to beginning of list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			p = head;
			head = head->next;
			free(p);
		}
		free(head);
	}
}
