#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int char_counter(char *str);
int byte_counter(char **arg_arr, int arg_count);
char *write_char(char *str1, char *str2, int pos);

/**
 * argstostr - concatenates the arguments to a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a concatenated string of arguments or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int n, bytes, i, pos;
	char *full_args;

	/* Check arguments and handle error*/
	if (ac == 0 || av == NULL)
		return (NULL);

	n = ac - 1;
	/* Number of bytes to allocate memory for */
	bytes = byte_counter(av, ac) + ac;
	/* Pointer to allocated memory location */
	full_args = (char *)malloc((sizeof(char) * bytes) + 1);
	/* Error handling for malloc failure */
	if (full_args == NULL)
		return (NULL);

	i = 0;
	pos = 0;

	while (i <= n)
	{
		full_args = write_char(av[i], full_args, pos);
		pos += char_counter(av[i]);
		full_args[pos] = '\n';
		pos += 1;
		i++;
	}
	full_args[pos] = '\0';
	return (full_args);
}


/**
 * byte_counter - counts the number of bytes to be allocated
 * @arg_arr: array of string arguments
 * @arg_count: number of arguments
 *
 * Return: total number of bytes counted
 */

int byte_counter(char **arg_arr, int arg_count)
{
	int i;
	int bytes_t = 0;

	for (i = 0; i < arg_count; i++)
		bytes_t += char_counter(arg_arr[i]);
	return (bytes_t);
}

/**
 * char_counter - counts the number of characters in a string
 * @str: string to count from
 *
 * Return: number of characters counter
 */

int char_counter(char *str)
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
 * write_char - writes char from str1 to str2
 * @str1: string to copy from
 * @str2: string to write to
 * @pos: position to begin writing to str2
 *
 * Return: copy of str1 in str2 at position pos
 */

char *write_char(char *str1, char *str2, int pos)
{
	int s1_len, i;

	i = 0;
	s1_len = char_counter(str1);

	while (i < s1_len)
	{
		str2[pos + i] = str1[i];
		i++;
	}
	/* printf("str2 after copying -> \n%s\n", str2); */
	return (str2);
}


