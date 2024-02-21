#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	/* After a new child process is created, both processes will execute the next instruction following the fork() system call. */
	pid_t p;
	printf("PID of main process %d\n\n", getpid());
	p = fork();
	printf("p[1] is %u\n", p); 
	p = fork();
	printf("p[2] is %u\n", p); 
	p = fork();
	printf("p[3] is %u\n", p); 
	return (0);
}
