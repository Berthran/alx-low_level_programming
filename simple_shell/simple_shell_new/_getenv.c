#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *_getenv(const char *name);

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
	val = _getenv(argv[1]);
	if (val)
		printf("%s\n", val);
	else
		printf("%s is not an environment variable\n", argv[1]);
	return (0);
}

char *_getenv(const char *name)
{
	char **env = environ;
	char *value;
	size_t i = 0;
	size_t n = strlen(name);

	while (env[i] != NULL)
	{
		if ((strncmp(name, env[i], n)) == 0)
			value = env[i];
		++i;
	}
	for (i = 0; i <= n; i++)
		++value;
	return (value);
}


