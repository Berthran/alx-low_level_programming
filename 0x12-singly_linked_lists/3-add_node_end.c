#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: address or pointer to the current node head
 * @str: string value to write into node str member
 *
 * Return: address to new element of node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t char_len;
	list_t *temp;
	list_t *temp2;

	temp = malloc(sizeof(list_t));
	temp2  = *head;

	if (temp && str)
	{
		char_len = strlen(str);
		temp->str = strdup(str);
		temp->len = char_len;
		temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
			return (*head);
		}
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
	}
	return (*head);
}
