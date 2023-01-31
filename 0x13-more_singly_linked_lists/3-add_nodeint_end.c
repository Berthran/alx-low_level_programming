#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * ad_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the head of the linked list
 * @n: integer value of the new linked list
 *
 * Return: pointer to new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_head;
	listint_t *last_node;

	last_node = (listint_t *)malloc(sizeof(listint_t));

	if (head && last_node)
	{
		temp_head = *head;
		last_node->n = n;
		last_node->next = NULL;

		if (*head == NULL)
		{
			*head = last_node;
			return (*head);
		}
		else
		{
			while(temp_head->next)
				temp_head = temp_head->next;
			temp_head->next = last_node;
		}
		return (*head);
	}
	return (NULL);
}

