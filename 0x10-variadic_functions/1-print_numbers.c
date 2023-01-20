#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - displays numbers passed as arg
 * @separator: sep character between numbers
 * @n: first number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator != NULL && n != 0)
	{
		va_start(ap, n);

		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), separator);
		printf("%d\n", va_arg(ap, int));
		va_end(ap);
	}
}
