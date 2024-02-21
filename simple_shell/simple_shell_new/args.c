#include <stdio.h>

/**
 * main - prints all the arguments without using the ac parameter
 * @ac: number of arguments
 * @av: list containing arguments
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	(void)ac;
	while (*av)
	{
		printf("%s\n", *av);
		++av;
	}
	return (0);
}
