#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - displays the number 0-9
 * letters - a varable to contain the english alphabets
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	int num;

	/*Loop statement to display numbers*/
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
