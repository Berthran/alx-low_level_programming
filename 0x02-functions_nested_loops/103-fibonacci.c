#include <stdlib.h>
#include <stdio.h>

/**
 * main - sum the multiples of 3 and 5
 *
 * Return: nothing
 */

int main(void)
{
	long int i, num1, num2, next_num, sum;

	num1 = 1;
	num2 = 1;
	sum = 0;

	while (num2 <= 4000000)
	{
		if ((num2 % 2) == 0)
			sum += num2;
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
	}
	printf("%lu\n", sum);
	return (0);
}
