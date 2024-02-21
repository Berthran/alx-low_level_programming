#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();

	printf("process id %u\nparent process id %u\n", pid, ppid);
	return (0);
}
