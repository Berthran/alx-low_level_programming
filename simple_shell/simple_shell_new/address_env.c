#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the address of *envp[] and the environ variable
 *
 * Return: 0 on success, 1 on failure
 */


int main(int ac, char *av[], char *envp[])
{
	(void)ac;
	(void)av;
	char **env = environ;

	printf("Address of envp [%p]\n", (void *)envp);
	printf("Address of environ [%p]\n", (void *)env);
	return (0);
}
