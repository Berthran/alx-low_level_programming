#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */

/**
 * int execve(const char *pathname, char *const argv[], char *const envp[]);
 * @pathname: must be a binary executable or a script
 * @argv: an array of pointers to strings passed to the new program as its command-line arguments
 * @envp: an array of pointers to string, conventionally of the form key=value, which are passed as the environment of the new program
 */
int main(int ac, char *argv[], char *envp[])
{
	int i;
	char *home = NULL;
	(void)argv;

	if (ac != 3)
	{
		perror("ERROR");
		exit(EXIT_FAILURE);
	}
	printf("Command-line arguments:\n");
	for (i = 0; i < ac; i++)
		printf("Argument %d: %s\n", i, argv[i]);

	printf("Environment variables:\n");
	for (i = 0; envp[i] != NULL; i++)
		printf("Variable %d: %s\n", i, envp[i]);

	for (i = 0; envp[i] != NULL; i++)
	{
		if (strncmp(envp[i], "HOME=", 5) == 0)
		{
			home = envp[i];
			break;
		}
	}

	if (home != NULL)
		printf("\nHOME environment variable: %s\n", home);
	else
		printf("\nHOME environment variable not found\n");
	return (0);
}
