#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes lower case to upper case
 * @s: string literal
 *
 * Return: all chaaractets in upper case
 */
char *string_toupper(char s[])
{
	int s_len = strlen(s);
	int i = 0;

	while (i <= s_len)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
