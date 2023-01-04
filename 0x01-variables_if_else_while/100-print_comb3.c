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

	/*Loop statement to display numbers*/
	for (i = '0'; i <= '9'; i++)
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
