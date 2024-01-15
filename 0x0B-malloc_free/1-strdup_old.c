#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to array
 */

char *_strdup(char *str)
{
	int i;
	int s_len;
	char *strcpy;

	if (str == NULL)
		return (NULL);

	s_len = strlen(str);
	strcpy = malloc((sizeof(char) * s_len) + 1);

	if (strcpy == NULL)
		return (NULL);

	for (i = 0; i < s_len; i++)
		strcpy[i] = str[i];
	return (strcpy);
}
