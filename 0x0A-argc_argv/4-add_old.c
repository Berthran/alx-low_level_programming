#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>

/**
 * main - add positive numbers together
 * @argc: count of function arguments
 * @argv: vector of function arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num = 0;
	int sum = 0;
	char *ele;

	if (argc == 1)
		printf("0\n");

	else
	{
		while (--argc)
		{
			ele = argv[argc];
			if (*ele < 48 || *ele > 57)
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[argc]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
