#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - fress a dlistint
 * @head: the beginning of the dlist
 *
 * Return: address of new element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_crawler;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head_crawler = head;
			head = head->next;
			free(head_crawler);
		}
		free(head);
	}
}
