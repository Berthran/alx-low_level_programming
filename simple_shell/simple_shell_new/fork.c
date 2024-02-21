#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	/* After a new child process is created, both processes will execute the next instruction following the fork() system call. */
	/* The fork system call creates a new process which is acopy of the current process except for the returned value.*/
	pid_t p = fork();
	if (p < 0)
	{
		perror("fork fail");
		exit(1);
	}
	else if (p == 0)
	{
		printf("\tIn child process -> PID = %d\n", getpid());
		printf("\tParent's PID = %d\n", getppid());
	}
	else
		printf("Parent process, process id(pid) = %d \n", getpid());
	return (0);
}
