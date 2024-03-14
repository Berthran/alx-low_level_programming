/* CODE IMPLEMENTATION of Bit manipulation */
/* Description: to print binary representation of a number */

#include "main.h"

/**
 * get_index_of_msd - gets the bit number of the most
 * sifnificant digit of a decimal
 * @d: the decimal number
 *
 * Return: the number position of the most significant digit
 */

int get_index_of_msd(unsigned long int d)
{
	int pow = 0;

	if (d <= 1)
		return (0);
	while (d != 1)
	{
		d = d >> 1;
		++pow;
	}
	return (pow);
}

/**
 * _exp - compute the exponent of a number by a number
 * @i: the number to be exponentiated
 * @j: the exponential
 *
 * Return: the exponential of i i.e i^j
 */

int _exp(unsigned long int i, unsigned long int j)
{
	if (j == 0)
		return (1);
	if (j == 1)
		return (i);
	return (i * _exp(i, j - 1));
}


/**
 * print_binary - prints binary representation of a number
 * @n: the decimal number to convert to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int j = 0, iter;
	unsigned long int pow, new_pow;

	iter = get_index_of_msd(n);
	pow = iter;

	(n == 0) ? _putchar('0') : _putchar('1');

	while (j < iter)
	{
		if (n != 0 && pow != 0)
			n = n - _exp(2, pow);
		if (n == 1 && pow == 0)
		{
			putchar('1');
			break;
		}
		else if (n == 0 && pow == 0)
		{
			putchar('0');
			++j;
		}
		else
		{
			new_pow = get_index_of_msd(n);
			while (new_pow != pow - 1)
			{
				_putchar('0');
				--pow;
				++j;
			}

			(new_pow != 0) ? _putchar('1'), ++j, --pow : --pow;
		}
	}
}
