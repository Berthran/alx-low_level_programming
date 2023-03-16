#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays the diff combination of 2 digits with no mutual repetition
 * letters - a varable to contain the english alphabets
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	/*Loop statement to display numbers*/
	for (i = '0'; i <= '8'; i++)
	{
		j = i + 1;
		for (; j <= '8'; j++)
		{
			k = j + 1;
			for (; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
