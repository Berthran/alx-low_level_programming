#include "main.h"

/**
 * _isdigit - checks if parameter is a digit
 * num - variabke of digits
 * @c: parameter passed to function
 *
 * Return: 0
 */
int _isdigit(int c)
{
	char num[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == num[i])
			return (1);
	}
	return (0);
}
