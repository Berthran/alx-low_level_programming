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
	char *temp_str;
	char **s_arr;
	int no_of_words, no_of_ptrs, no_of_bytes, i, j;

	if (str == NULL || *str == '\0')
		return (NULL); /* Return NULL for empty of NULL string */

	/* Extract number of words from string */
	no_of_words = word_count(str);
	if (no_of_words == 0)
		return (NULL); /* Return NULL if no words found */

	/* Calulate number of pointers needed */
	no_of_ptrs = no_of_words + 1;

	/* Allocate memory for no_of_ptrs on the heap */
	s_arr = (char **)malloc(sizeof(char *) * no_of_ptrs);

	/* Handle malloc error */
	if (s_arr == NULL)
		return (NULL);

	for (i = 0; i < no_of_words; ++i)
	{
		/* Extract number of bytes from each word */
		no_of_bytes = byte_count(str);
		/* Allocate memory for bytes counted on the heap */
		s_arr[i] = (char *)malloc(sizeof(char) * no_of_bytes);

		/* Handle malloc error */
		if (s_arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(s_arr[i]);
				i--;
			}
			free(s_arr);
			return (NULL);
		}
		/* Call function to move string to the next word */
		str = last_letter(str);
		/* Calls function to etrieve the first word from string*/
		temp_str = first_letter(str, no_of_bytes);
		/* Copy word into s_arr[i] */
		for (j = 0; j < (no_of_bytes); j++)
			s_arr[i][j] = *temp_str++;
	}
	/* Set last element of array to NULL */
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
			return (byte_count);
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
			return (str);
		++str;
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

	for (i = 0; i < (bytes); i++)
		ptr--;
	return (ptr);
}
