#include <stdio.h>
#include <unistd.h>

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
int main(void)
{
	/* The execve() system call replaces the current process with a new program */
	char *argv[] = {"/bin/ls", "-l", ".", NULL};
	
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error");
	}
	printf("After execve\n");
	return (0);
}
