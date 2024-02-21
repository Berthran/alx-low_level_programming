/* Example of using environ withour _GNU_SOURCE feature test macro */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the environment available to the program using environ
 *
 * Return: 0 on success, 1 on failure
 */

/* Declare environ variable since _GNU_SOURCE is not defined */
/*extern char **environ;*/

int main(void)
{
	/*char **env = environ;*/

	while (*environ != NULL)
	{
		printf("%s\n", *environ);
		++environ;
	}
	return (0);
}
