#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - get the value of an environment variable
 *
 * Return: 0 on success, 1 on failure
 */

int main(int ac, char *argv[], char *envp[])
{
	char *val = NULL;
	(void)envp;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s environ_var\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	val = getenv(argv[1]);
	if (val)
		printf("%s\n", val);
	else
		printf("%s is not an environment variable\n", argv[1]);
	printf("\n");
	while (*val)
		printf("%s\n", val++);
	
	return (0);
}


