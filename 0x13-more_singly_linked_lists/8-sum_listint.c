#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of elements in a linked lis
 * @head: beginning of the list
 *
 * Return: sum of elements in the list
 */

int sum_listint(listint_t *head)
{
	listint_t *int_get;

	int sum = 0;

	if (head == NULL)
		return (0);

	int_get = head;

	while (int_get)
	{
		sum += int_get->n;
		int_get = int_get->next;
	}
	return (sum);
}
