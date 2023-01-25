#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - displays strings passed as arg
 * @separator: sep character between numbers
 * @n: number of strings arguments passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0)
	{
		va_start(ap, n);
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
				printf("%s%s", va_arg(ap, char *), separator);
		}
		else
		{
			for (i = 0; i < n - 1; i++)
				printf("%s", va_arg(ap, char *));
		}
		printf("%s\n", va_arg(ap, char *));
		va_end(ap);
	}
	else
		printf("\n");

}
