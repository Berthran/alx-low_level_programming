#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - frees up linked list memory and sets head to NULL
 * @head: pointer to beginning of list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
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
		head = NULL;
	}
}
