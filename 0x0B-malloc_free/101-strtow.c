#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int word_count(char *str_ptr);
int byte_count(char *str_ptr);
char *last_letter(char *str);
char *first_letter(char *str, int bytes);

/**
 * strtow - splits a string into an array of words
 * @str: string to split into words
 *
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char *emp_str, *temp_str;
	char **s_arr;
	int no_of_words, no_of_ptrs, no_of_bytes, i, j;

	emp_str = "";

	if (str == NULL || str == emp_str)
		return (NULL);

	no_of_words = word_count(str);
	no_of_ptrs = no_of_words + 1;

	s_arr = (char **)malloc(sizeof(char *) * no_of_ptrs);

	if (s_arr == NULL)
		return (NULL);

	for (i = 0; i < no_of_words; ++i)
	{
		no_of_bytes = byte_count(str);
		s_arr[i] = (char *)malloc(sizeof(char) * no_of_bytes);

		if (s_arr[i] == NULL)
		{
			free(s_arr[i]);
			free(s_arr);
			return (NULL);
		}
		str = last_letter(str);
		temp_str = first_letter(str, no_of_bytes);

		for (j = 0; j < (no_of_bytes - 1); j++)
			s_arr[i][j] = *temp_str++;
		s_arr[i][j] = '\0';
	}
	s_arr[i] = NULL;
	return (s_arr);
}


/**
 * word_count - counts the number of space delimited words in a string
 * @str_ptr: string to get words from
 *
 * Return: number of words counted
 */


int word_count(char *str_ptr)
{
	int count, word_count;
	char *str;

	word_count = 0;
	str = str_ptr;

	while (*str != '\0')
	{
		count = 0;
		while (*str != ' ')
		{
			count++;
			str++;
		}
		if (count > 0)
			word_count += 1;
		else
			str++;
	}
	return (word_count);
}

/**
 * byte_count - counts the number of bytes in a word
 * @str_ptr: string/word to count the bytes from
 *
 * Return: number of bytes counted + 1
 */


int byte_count(char *str_ptr)
{
	int byte_count;
	char *str;

	byte_count = 0;
	str = str_ptr;

	while (*str != '\0')
	{
		while (*str != ' ')
		{
			byte_count++;
			str++;
		}
		if (byte_count > 0)
			return (byte_count + 1); /* Including '\0' */
		str++;
	}
	return (byte_count);
}

/**
 * last_letter - moves a string to the last letter of the first word
 * @str: the string to move on
 *
 * Return: pointer to the last letter of the first word encountered
 */

char *last_letter(char *str)
{
	int count;

	while (*str != '\0')
	{
		count = 0;
		while (*str != ' ')
		{
			count++;
			str++;
		}
		if (count > 0)
			return (str--);
		str++;
	}
	return (str);
}

/**
 * first_letter - moves a string to the first letter of a word
 * @str: the string to move on
 * @bytes: the amount of bytes to move by
 *
 * Return: pointer to the first letter
 */

char *first_letter(char *str, int bytes)
{
	int i;
	char *ptr;

	ptr = str;

	for (i = 0; i < (bytes - 1); i++)
		ptr--;
	return (ptr);
}
