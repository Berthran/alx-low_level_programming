#include "main.h"

/**
 * print_sign - returns integer rep sign of number
 * @n: number
 *
 * Return: an integer number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		n = 0;
	}
	return (n);
}
