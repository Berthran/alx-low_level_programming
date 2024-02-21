#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5;

	if (fork() == 0)
	{
		a = a + 5;
		printf("%d, %p\n", a, (void *)&a);
	}
	else
	{
		a = a - 5;
		printf("%d, %p\n", a, (void *)&a);
	}
	return (0);
}
