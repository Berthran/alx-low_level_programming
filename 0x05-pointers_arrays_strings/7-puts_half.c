#include "main.h"
#include <stdio.h>

/**
 * puts_half - displays an array of characters to stdout
 * @str: string character
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int len;
	int j;
	int n;
	char *my_str = str;

	for (i = 1; *str != '\0'; i++)
	{
		str++;
		len = i;
	}

	if ((len % 2) == 0)
	{
		n = len / 2;
		for (j = n; j <= len - 1; j++)
			_putchar(*(my_str + j));
	}

	else
	{
		n = ((len - 1) / 2) + 1;
		for (j = n; j <= len - 1; j++)
			_putchar(*(my_str + j));
	}
	_putchar('\n');
}
