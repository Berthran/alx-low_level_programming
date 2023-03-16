#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string variable
 * @c: character to find in string
 *
 * Return: pointer to the first occurence of the character in string
 */

char *_strchr(char *s, char c)
{	int i;
	char *ps;
	int str_len;

	str_len = strlen(s);

	for (i = 0; i < str_len; i++)
	{
		ps = s + i;
		if (*(s + i) == c)
			return (ps);
	}
	return (NULL);
}
