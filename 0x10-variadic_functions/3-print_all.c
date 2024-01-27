#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any type of data
 * @format: list of types of arguments passed to function
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n_dtypes = 0;
	char type_char;
	char *formats[4] = {"c", "i", "f", "s"};

	va_start(ap, format);

	type_chars = format[i];

	while (type_chars != '\0') /* Signal end of format list */
	{

		
	}

	/* Now we know a range to loop through to look for arguments */



		if (dtype == 'c' || dtype == 'i' || dtype == 'f' || dtype == 's')







}
