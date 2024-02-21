/* Example of using environ with _GNU_SOURCE feature test macro */
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the environment available to the program using environ
 *
 * Return: 0 on success, 1 on failure
 */

/* No need to declare environ variable since it is declared in unistd.h when _GNU_SOURCE is defined */

int main(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		++env;
	}
	return (0);
}
