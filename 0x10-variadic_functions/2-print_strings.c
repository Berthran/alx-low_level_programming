#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *str, *NULL_STR = "(nil)";
	va_list ap;

	if (separator == NULL)
		separator = "";

	if (n != 0)
	{
		va_start(ap, n);

		while (count++ < n)
		{
			str = va_arg(ap, char*);

			if (str == NULL && count < n)
				printf("%s%s", NULL_STR, separator);
			else if (str == NULL && count == n)
				printf("%s", NULL_STR);
			else if (str != NULL && count == n)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		printf("\n");
	}
	va_end(ap);
}
