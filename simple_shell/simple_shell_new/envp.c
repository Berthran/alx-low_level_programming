#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
	(void)argv;

	if (ac == 0)
	{
		perror("ERROR");
		exit(EXIT_FAILURE);
	}
	printf("Before execve\n");
	for (i = 0; envp[i] != NULL; i++)
		printf("%s\n", envp[i]);
	printf("After execve\n");
	return (0);
}
