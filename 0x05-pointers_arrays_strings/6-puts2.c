#include "main.h"

/**
 * puts2 - displays an array of characters to stdout
 * @str: string character
 *
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
		if (*(str - 1) == '\0')
			break;
	}
	_putchar('\n');
}
