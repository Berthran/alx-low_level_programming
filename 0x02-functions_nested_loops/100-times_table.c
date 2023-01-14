#include "main.h"

/**
 * print_2digits - displays 2 digits numbers
 * @i: first number
 * @j: second number
 *
 * Return: nothing
 */

void print_2digits(int i, int j)
{
	int div;
	int mod;
	int prod;

	prod = i * j;

	if (prod > 9 && prod <= 99)
	{
		div = prod / 10;
		mod = prod % 10;
		_putchar(' ');
		_putchar('0' + div);
		_putchar('0' + mod);
	}
}

/**
 * print_3digits - displays a three digit numbered product of 2 numbers
 * @i: first number
 * @j: second number
 *
 * Return: nothing
 */

void print_3digits(int i, int j)
{
	int hund, tens, unit, prod;

	prod = i * j;

	if (prod >= 100)
	{
		unit = prod % 10;
		tens = (prod / 10) % 10;
		hund = (prod / 10) / 10;
		_putchar('0' + hund);
		_putchar('0' + tens);
		_putchar('0' + unit);
	}
}

/**
 * print_digit - print 1 digit numbered product of 2 numbers
 * @i: fiest number
 * @j: second number
 *
 * Return: nothing
 */

void print_digit(int i, int j)
{
	int prod;

	prod = i * j;

	if (prod <= 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + prod);
	}
}

/**
 * print_times_table - prints n times table
 * @n: number of times table
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				print_digit(i, j);
				print_2digits(i, j);
				print_3digits(i, j);
			}
			_putchar('\n');
		}
	}

}
