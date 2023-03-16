#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string character
 * @s2: second string character
 *
 * Return: pointer to memory address of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *pStr;
	size_t i, j, s1_len, s2_len;

	j = 0;

	/* Handle NULL strings by converting to empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	pStr = (char *)malloc((1 + s1_len + s2_len) * sizeof(char));

	/* Handle memory allocation error */
	if (pStr == NULL)
		return (NULL);

	/* Write s1 characters to memory*/
	for (i = 0; i < s1_len; i++)
		pStr[i] = s1[i];
	/*
	 * Continue with i to go further in memory space and j to
	 * begin with s2
	 */
	while (i < (s1_len + s2_len))
	{
		pStr[i] = s2[j];
		++j;
		++i;
	}
	pStr[i] = '\0';
	return (pStr);
}
