#include "main.h"

/**
 * _puts - displays an array of characters to stdout
 * @str: string character
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
