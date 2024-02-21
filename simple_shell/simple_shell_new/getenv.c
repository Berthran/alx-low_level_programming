#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - get the value of an environment variable
 *
 * Return: 0 on success, 1 on failure
 */

int main(void)
{
	char *var = "PWD";
	char *val = NULL;

	val = getenv(var);
	if (val)
		printf("%s\n", val);
	return (0);
}



