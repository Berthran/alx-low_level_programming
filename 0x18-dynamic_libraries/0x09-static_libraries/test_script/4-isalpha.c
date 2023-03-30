#include "main.h"

/**
 * _isalpha - checks if a letter is lower case
 * @c: a varable to contain the english alphabets
 * Return: 1 if lower, 0therwise
 */

int _isalpha(int c)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	/*Conditional statement*/
	for (i = 0; i < 52; i++)
	{
		if (c == alpha[i])
			return (1);
	}
	return (0);
}
