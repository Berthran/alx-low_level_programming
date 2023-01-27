#include "lists.h"
#include <stdio.h>
#include <stlib.h>
#include <string.h>

/**
 * add_node - adds a node to a node pointer
 * @head: address or pointer to the current node head
 * @str: string value to write into node str member
 *
 * Return: address to new element of node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t char_len;
	list_t temp;

	temp = malloc(sizeof(list_t));

	if (temp && str)
	{
		char_len = strlen(str);
		temp->str = strdup(str);
		temp->len = char_len;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
