#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns len of string
 * @s: string character
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	len = len + 0;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
