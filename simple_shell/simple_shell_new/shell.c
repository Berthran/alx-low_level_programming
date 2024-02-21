#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <signal.h>

/**
 * main - receives command from command-line and executes it
 * Runs commands withe their full path. Takes no other argument.
 *
 * Return: 0 on success, -1 on failure
 */

int main(int ac, char *av[])
{
	(void)ac;
	/* Variables for getline() */
	ssize_t nbytes;
	size_t n = 0;
	char *line = NULL;
	/* Variables for fork() */
	pid_t p;
	/* Variables for execve */
	char *argv[] = {NULL, NULL};
	/* Variable for wait() */
	int wstatus;
	/* Variable for strtok() */
	char *cmd;
	/* Variable for lstat() */
	struct stat statbuf;
	(void)statbuf;
	pid_t cpid;
	(void)cpid;
	int errno = 0;


	printf("#cisfun$ ");
	
	while((nbytes = getline(&line, &n, stdin)) != EOF)
	{
		/* No command is given */
		if (*line == '\n')
		{
			printf("#cisfun$ ");
			continue;
		}

		/* A command is provided */
		cmd = strtok(line, "\n");
		argv[0] = cmd;
		p = fork();
		if (p == -1)
			return (-1); /* Failure to create child process */
		else if (p == 0) /* Within the child process */
		{
			cpid = getpid();
			/* Check if command exists */
			if ((execve(argv[0], argv, NULL)) == -1)
			{
				++errno;
				printf("%s: %d: %s: not found\n", av[0], errno, cmd);
				printf("#cisfun$ ");
				kill(cpid, SIGKILL);
			}
		}
		else /* Within the parent process */
		{
			wait(&wstatus);
			printf("#cisfun$ ");
		}
	}
	printf("\n");
	free(line);
	return (0);
}

