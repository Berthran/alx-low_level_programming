#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums the integer values of doubly linked list
 * @head: the dlist header
 *
 * Return: the sum of the integer data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head_crawler;
	int int_sum = 0;

	if (head == NULL)
		return (0);

	head_crawler = head;
	while (head_crawler != NULL)
	{
		int_sum += head_crawler->n;
		head_crawler = head_crawler->next;
	}
	return (int_sum);
}
