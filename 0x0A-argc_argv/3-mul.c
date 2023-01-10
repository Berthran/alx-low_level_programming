#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply 2 numbers
 * @argc: count of function arguments
 * @argv: vector of function arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a;
		int b;
		int prod;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		prod = a * b;

		printf("%d\n", prod);
		return (0);
	}
}
