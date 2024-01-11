#include "main.h"

/**
 * _puts_recursion - a function to write a string follwed by a new line
 * @s: the pointer to the string to be written
 *
 * Return: returns nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
