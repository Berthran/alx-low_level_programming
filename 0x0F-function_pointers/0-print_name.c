#include "function_pointers.h"

/**
 * print_name - prints given name
 * @name: name to print
 * @f: function pointer to format to print name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
