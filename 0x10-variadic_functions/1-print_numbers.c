#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list ap;

	if (separator == NULL || *separator == '\0')
		separator = "";

	if (n != 0)
	{
		va_start(ap, n);
		while (count++ < n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		printf("%d", va_arg(ap, int));
	printf("\n");
	}
	va_end(ap);
}
