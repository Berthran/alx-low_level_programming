#include <stdlib.h>
#include <stdio.h>

/**
 * main - sum the multiples of 3 and 5
 *
 * Return: nothing
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
