#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if a letter is lower case
 * @c - a varable to contain the english alphabets
 *  small_caps - a string array of all letters of the english alohabel
 * Return: 1 if lower, 0therwise
 */

int _islower(int c)
{
	char small_caps[] = "abcdefghijklmnopqrst";
	int i;
	/*Conditional statement*/
	for (i = 0; i < 26; i++)
	{
		if (c == small_caps[i])
			return (1);
	}
	return (0);
}
