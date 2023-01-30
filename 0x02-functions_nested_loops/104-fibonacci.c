#include <stdlib.h>
#include <stdio.h>

/**
 * main - sum the multiples of 3 and 5
 *
 * Return: nothing
 */

int main(void)
{
	long int i, num1, num2, next_num;

	num1 = 1;
	num2 = 1;

	for (i = 0; i <= 97; i++)
	{
		if (i == 97)
			printf("%lu\n", num2);
		else
		{
			printf("%lu, ", num2);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
		}
	}
	printf("\n");
	return (0);
}
