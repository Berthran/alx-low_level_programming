#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list and sets head to NULL
 * @h: pointer to the beginning of the linked list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t s_list = 0;
	listint_t *lptr = NULL;
	listint_t *lcraw = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	lptr = *h;
	lcraw = *h;


	while (lcraw != NULL)
	{
		if (lcraw->next < lptr)
		{
			lcraw = lcraw->next;
			free(lptr);
			lptr = lcraw;
			++s_list;
		}
		else if (lcraw->next >= lptr)
		{
			/*free(lcraw->next);*/
			free(lptr);
			lcraw = NULL;
		}
	}
	free(lcraw);
	*h = NULL;
	return (s_list);
}
