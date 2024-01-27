#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters passed to function except the first
 * @n: number of integers to sum
 *
 * Return: sum of integers or 0 if n equals zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0); /* No integers to sum */

	va_start(ap, n);

	while (count < n)
	{
		sum += va_arg(ap, int);
		count++;
	}
	va_end(ap);
	return (sum);
}


