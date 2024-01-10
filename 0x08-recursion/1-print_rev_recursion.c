#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function to print a
 * string of characters in reverse order
 * @s: the string of characters to print
 *
 * Return: Nothing
 */


void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}

}



