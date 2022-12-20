#include "main.h"

/**
 * puts2 - displays an array of characters to stdout
 * @str: string character
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
