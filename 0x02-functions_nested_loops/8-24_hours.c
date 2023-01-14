#include  "main.h"

/**
 * print_minutes - displays time in minutes
 * @i: hour 1st digit
 * @j: hour 2nd digit
 * @k: minute 1st digiy
 * @l: minuye 2nd digit
 *
 * Return: Nothing
 */

void print_minutes(int i, int j, int k, int l)
{
	_putchar('0' + i);
	_putchar('0' + j);
	_putchar(':');
	_putchar('0' + k);
	_putchar('0' + l);
	_putchar('\n');
}

/**
 * jack_bauer - displays a count of 24 hours
 * Return: Nothing
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		if (i < 2)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
						print_minutes(i, j, k, l);
				}
			}
		}

		else
		{
			for (j = 0; j <= 3; j++)
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						print_minutes(i, j, k, l);
					}
				}
			}
		}
	}
}
