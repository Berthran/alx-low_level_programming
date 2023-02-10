#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * letters: variable of all uppercass letters of english alphabet
 * @c: parametet passed to function
 * Return: 0
 */
int _isupper(int c)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == letters[i])
			return (1);
	}
	return (0);
}
