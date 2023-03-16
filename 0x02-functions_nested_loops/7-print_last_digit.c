#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number
 * Return: last digit
 */

int print_last_digit(long int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;

	do {
		last_digit = n % 10;
	} while (last_digit >= 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
