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
	listint_t *hptr;
	listint_t *hptr2;

	int node_count = 0;


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

		hptr2 = *head;
		head_num = hptr2->n;
		*head = hptr2->next;
		free(hptr2);
		return (head_num);
	}
	return (0);
}
