#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers up or down to 98
 * @n: number
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d", n);
		while (n < 98)
		{
			printf(", %d", n + 1);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		printf("%d", n);
		while (n > 98)
		{
			printf(", %d", n - 1);
			n--;
		}
		printf("\n");
	}
	else
		printf("%d\n", n);
}
