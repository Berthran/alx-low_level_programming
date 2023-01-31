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
	char *str;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head;
			str = head->str;
			head = head->next;
			free(temp);
			free(s);
		}
		free(head->str);
		free(head);
	}
}
