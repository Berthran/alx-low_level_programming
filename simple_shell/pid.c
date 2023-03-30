#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t my_pid, pidp;
	pidp = getpid();
	my_pid = getppid();
	printf("%u \n", my_pid);
	printf("%u\n", pidp);
	return (0);
}

