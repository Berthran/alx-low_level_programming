#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number of times table
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, div, mod, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				prod = i * j;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (prod > 9)
				{
					div = prod / 10;
					mod = prod % 10;
					_putchar('0' + div);
					_putchar('0' + mod);
				}
				else if (prod <= 9)
				{
					_putchar(' ');
					_putchar('0' + (i * j));
				}
			}
			_putchar('\n');
		}
	}

}
