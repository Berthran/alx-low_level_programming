#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *handleNullStr(char *str);
int _strlen(char *str);
char *writeChar(char *s1, char *s2, unsigned int n, unsigned int pos);

/**
 * string_nconcat - concatenates s1 and s2 by n bytes of s2
 * @s1: string to concat to
 * @s2: string to concat
 * @n: number of bytes of s2 to concat to s1
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	char *new_str;

	/* Handle null string */
	s1 = handleNullStr(s1);
	s2 = handleNullStr(s2);

	/* Count length of s1 */
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	/* Compare s2_len with n */
	if (n >= s2_len)
		n = s2_len;

	/* Allocate memory for concatenated string */
	new_str = malloc(sizeof(char) * (s1_len + n + 1));
	/* Handle malloc fail */
	if (new_str == NULL)
		return (NULL);

	/* Write to new_str */
	new_str = writeChar(s1, new_str, s1_len, 0);
	new_str = writeChar(s2, new_str, n, s1_len);
	new_str[s1_len + n] = '\0';

	return (new_str);

}

/**
 * handleNullStr - check if string passed is null
 * @str: string to check
 *
 * Return: "" if null, or the original string
 */

char *handleNullStr(char *str)
{
	if (str == NULL || *str == '\0')
		return ("");
	return (str);
}

/**
 * _strlen - counts number of characters in a string
 * @str: string with characters to count
 *
 * Return: number of characters counted
 */

int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * writeChar - writes n characters from s1 to s2
 * @s1: array of characters to read from
 * @s2: string pointer to write to
 * @n: number of characters of s1 to write to s2
 * @pos: the position to begin writing from
 *
 * Return: pointer to s2 with written characters
 */

char *writeChar(char *s1, char *s2, unsigned int n, unsigned int pos)
{
	unsigned int char_counter = 0;

	while (char_counter < n)
	{
		s2[pos + char_counter] = s1[char_counter];
		char_counter++;
	}
	return (s2);
}

