#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: nothing
 */

void times_table(void)
{
	int i;
	int j;
	int div;
	int mod;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			prod = i * j;
			_putchar(',');
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
