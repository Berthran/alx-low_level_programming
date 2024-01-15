#include "main.h"
#include <stdlib.h>
#include <stdio.h>


int count_chars(char *str);


/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated array of characters
 */

char *_strdup(char *str)
{
	int i;
	int str_len;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	str_len = count_chars(str);
	str_copy = malloc((sizeof(char) * str_len) + 1);

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
		str_copy[i] = str[i];

	return (str_copy);
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
