#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change
 * @argv: array of arguments to main program
 * @argc: number of arguments passed to main
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i, cents, count;
	int changes[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0");
	else
	{
		i = 0;
		count = 0;
		while (cents)
		{
			if (changes[i] > cents)
				i = i + 1;
			else
			{
				cents = cents - changes[i];
				count = count + 1;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
