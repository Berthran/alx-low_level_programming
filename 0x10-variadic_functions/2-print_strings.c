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
	char *str;

	if (n != 0)
	{
		va_start(ap, n);
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
			{
				str = va_arg(ap, char *);
				if (str != NULL)
					printf("%s%s", str, separator);
				else
					printf("(nil)\n");
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				str = va_arg(ap, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)\n");
			}
		}
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s\n", str);
		else
			printf("(nil)\n");
		va_end(ap);
	}
	else
		printf("\n");

}
