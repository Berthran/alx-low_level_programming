#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int s1_len;
	int s2_len;
	char *strcat;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";
	

	i = 0;
	j = 0;
	s1_len = strlen(s1);
	printf("s1_len = %d\n", s1_len);
	s2_len = strlen(s2);
	printf("s2_len = %d\n", s2_len);
	strcat = malloc(sizeof(char) * (s1_len + s2_len) + 1);

	if (strcat == NULL)
		return (NULL);

	while (i < s1_len)
	{
		strcat[i] = s1[i];
		i++;
	}

	while (j < s2_len)
	{
		strcat[i + j] = s2[j];
		j++;
	}
	/*strcat[-1] = '\0';*/
	return (strcat);
}
