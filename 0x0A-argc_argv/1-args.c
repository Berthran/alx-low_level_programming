#include "main.h"
#include <stdio.h>

/**
 * main - function to print number of argumentspassed to function
 * @argc: count of function arguments
 * @argv: vector of function arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
