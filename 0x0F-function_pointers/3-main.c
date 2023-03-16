#include "3-calc.h"
#include <stdio.h>

/**
 * main - performs arrimetic operationson 2 integers
 * @argc: number of arguments passed to main
 * @argv: array of values of arguments passed
 *
 * Return: result of the arithmetic expression
 */

int main(int argc, char *argv[])
{
	int num1, num2, answer;
	char *op;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == "/" || op == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = get_op_func(op)(num1, num2);
	printf("%d\n", answer);
	return (0);
}
