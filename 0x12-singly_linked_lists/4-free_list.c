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
	list_t  *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		free(head);
	}
}

