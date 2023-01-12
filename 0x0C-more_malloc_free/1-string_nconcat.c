#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats s1 and n bytes of s2
 * @s1: string to concat to
 * @s2: string to concat
 * @n: number of bytes of s2 to concat to s1
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	char *strcat;
	unsigned int i;
	unsigned int j;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	strcat = malloc((sizeof(char) * (s1_len + s2_len)) + 1);

	if (strcat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		strcat[i] = s1[i];
	}

	if (n >= s2_len)
	{
		for (j = 0; j <= s2_len; j++)
		{
			strcat[i + j] = s2[j];
		}
		strcat[-1] = '\0';
		return (strcat);
	}

	for (j = 0; j < n; j++)
	{
		strcat[i + j] = s2[j];
	}
	strcat[-1] = '\0';
	return (strcat);
}
