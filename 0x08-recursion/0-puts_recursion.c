#include "main.h"
#include <string.h>

/**
 * _puts_recursion - recursively prints string
 * @s: string literal
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

