#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *null_checker(char *str);
int count_chars(char *str);
char *write_chars(char *read_str, char *write_str, int position, int str_len);

/**
 * str_concat - concatenates two strings
 * @s1: first string character
 * @s2: second string character
 *
 * Return: pointer to memory address of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len;
	char *str_concat;

	/* Handle NULL strings by converting to empty strings*/
	s1 = null_checker(s1);
	s2 = null_checker(s2);

	s1_len = count_chars(s1);
	s2_len = count_chars(s2);

	/* Allocate memory for s1 and s2 concatenated */
	str_concat = (char *)malloc((1 + s1_len + s2_len) * sizeof(char));

	/* Handle memory allocation error */
	if (str_concat == NULL)
		return (NULL);

	/* Write characters to allocated memory*/
	str_concat = write_chars(s1, str_concat, 0, s1_len);
	str_concat = write_chars(s2, str_concat, s1_len, s2_len);
	return (str_concat);
}

/**
 * null_checker - checks if strings are null
 * @str: string to check
 *
 * Return: original string if not null or empty string if null
 */

char *null_checker(char *str)
{
	if (str == NULL)
		return ("");
	return (str);
}

/**
 * count_chars - counts the number of characters in a string
 * @str: the string of characters to count
 *
 * Return: the length of the string
 */

int count_chars(char *str)
{
	int counter = 0;

	while (*str++)
		counter++;
	return (counter);
}

/**
 * write_chars - writes the characters of one
 * string to another at a given position
 * @read_str: string to copy from
 * @write_str: string to write to
 * @position: position to begin writing to write_str
 * @str_len: length of read_str
 *
 * Return: the write_str
 */

char *write_chars(char *read_str, char *write_str, int position, int str_len)
{
	int counter = 0;

	while (counter < str_len)
	{
		write_str[position + counter] = read_str[counter];
		counter++;
	}
	return (write_str);
}
