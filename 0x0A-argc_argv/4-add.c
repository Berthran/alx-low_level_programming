#include <stdio.h>
#include <stdlib.h>

int check_arg(char *arg);
int add_arg(char *arg, int sum);

/**
 * main - add positive numbers together
 * @argc: count of function arguments
 * @argv: vector of function arguments
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int is_digit = 0;
	int sum = 0;
	char *arg;

	if (argc == 1)
		printf("0\n");

	else
	{
		while (--argc)
		{
			arg = argv[argc];
			is_digit = check_arg(arg);

			if (!is_digit)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = add_arg(arg, sum);
		}
		printf("%d\n", sum);
	}
	return (0);
}



/**
 * check_arg - check the list of characters in argument
 * @arg: argument pointer
 *
 * Return: 0 if digit, 1 if not digit
 */

int check_arg(char *arg)
{
	char character;

	while (*arg != '\0')
	{
		character = *arg;

		if (character < 48 || character > 57)
			return (0); /* A NON-DIGIT CHARACTER FOUND */
		arg++;
	}
	return (1); /* ALL CHARACTERS ARE DIGITS */
}


/**
 * add_arg - adds the value of arg to sum
 * @arg: arg to add to sum
 * @sum: variable storing sum of all arguments
 *
 * Return: sum of arguments
 */

int add_arg(char *arg, int sum)
{
	int int_arg;
	int new_sum;

	int_arg = atoi(arg);
	new_sum = sum + int_arg;
	return (new_sum);
}

