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
	const void *ptr = head;
	size_t n_nodes = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL && (void *)head <= ptr)
	{
		n = head->n;
		printf("[%p] %d\n", (void *)head, n);
		ptr = head;
		head = head->next;
		n_nodes += 1;
	}
	if ((void *)head > ptr)
		printf("-> [%p] %d\n", (void *)head, head->n);
	return (n_nodes);
}
