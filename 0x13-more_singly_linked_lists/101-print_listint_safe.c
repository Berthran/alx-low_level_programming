#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints the element and memory address of a linked list
 * @head: the beginning of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int n;
	const listint_t *ptr;
	size_t n_nodes = 0;

	if (head == NULL)
		return (n_nodes);

	while (head != NULL)
	{
		n = head->n;
		printf("[%p] %d\n", (void *)head, n);
		ptr = head;
		head = head->next;
		if (head < ptr)
			n_nodes += 1;
		else
			break;
	}
	if (head >= ptr)
		printf("-> [%p] %d\n", (void *)head, head->n);
	return (n_nodes);
}
