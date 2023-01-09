#include "main.h"
#include <stdio.h>

/**
 * main - function to prints all function arguments
 * @argc: count of function arguments
 * @argv: vector of function arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int iter;
	(void) argc;
	(void) argv;

	for (iter = 0; iter < argc; iter++)
		printf("%s\n", argv[iter]);
	return (0);
}
