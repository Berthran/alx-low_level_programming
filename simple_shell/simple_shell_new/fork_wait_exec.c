#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	pid_t p;
	int i = 0, status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	while (i < 5)
	{
		p = fork();

		if (p == -1)
		{
			exit(EXIT_FAILURE);
		}
		else if (p == 0)
			execve(argv[0], argv, NULL);
		else
			wait(&status);
		++i;
	}
	return (0);
}
