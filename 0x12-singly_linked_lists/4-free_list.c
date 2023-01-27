#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the beginning of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp = malloc(sizeof(list_t));
	if (head != NULL && temp != NULL)
	{
		while (head->next != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		free(head);
	}
}

