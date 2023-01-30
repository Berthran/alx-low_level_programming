#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>

int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct list_s *next;
} listint_t;


#endif
