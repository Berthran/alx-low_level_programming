#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays all possible combo of two 2 digits with no mutual repetition
 *
 * Return: 0
 */
int main(void)
{
	int i, j, mod_i, div_i, mod_j, div_j;

	/*Loop statement to display numbers*/
	for (i = 0; i <= 98; i++)
	{
		mod_i = i % 10;
		div_i = i / 10;
		j = i + 1;
		while (j <= 99)
		{
			mod_j = j % 10;
			div_j = j / 10;

			putchar('0' + div_i);
			putchar('0' + mod_i);
			putchar(' ');
			putchar('0' + div_j);
			putchar('0' + mod_j);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			++j;
		}
	}
	putchar('\n');
	return (0);
}
