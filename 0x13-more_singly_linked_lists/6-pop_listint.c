#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes head of a linked list
 * @head: pointer to the beginning of the list
 *
 * Return: the integer value of head before it is deleted
 */

int pop_listint(listint_t **head)
{
	int head_num;
	int node_count = 0;
	listint_t *hptr;
	listint_t *hptr2;

	if (head != NULL)
	{
		hptr = *head;

		while (hptr)
		{
			hptr = hptr->next;
			++node_count;
		}

		if (node_count == 0)
			return (0);

		free(hptr);
		hptr2 = *head;
		head_num = hptr2->next;
		hptr2 = hptr2->next;
		*head = hptr2;
		return (head_num);
	}
	return (NULL);
}
