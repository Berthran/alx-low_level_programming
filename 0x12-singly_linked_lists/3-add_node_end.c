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

	temp = malloc(sizeof(list_t));

	if (temp && str)
	{
		char_len = strlen(str);
		temp->str = strdup(str);
		temp->len = char_len;
		temp->next = NULL;
		*head->next = &temp;
		*head = temp;
	}
	return (*head);
}
