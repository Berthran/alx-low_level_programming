#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string variable
 * @c: character to find in string
 *
 * Return: pointer to the first occurence of the character in string
 */

unsigned int _strspn(char *s, char *accept)
{	
	int i;
	int j;
	char *pa;
	int s_len;
	int a_len;
	unsigned int n = 0;

	s_len = strlen(s);
	a_len = strlen(accept);

	for (i = 0; i < a_len; i++)
	{
		pa = accept + i;
		
		for (j = 0; j < s_len; j++)
		{
			if (*(s + j) == *pa)
			{
				n += 1;
				break;
			}
		}
	}
	return (n);
}
