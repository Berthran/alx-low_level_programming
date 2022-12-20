#include "main.h"

/**
 * rev_string - returns len of string
 * _strlen - returns length of string
 * @s: string character
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}

void rev_string(char *s)
{
	int i;
	char temp;
	char *pa;
	int len;

	len = _strlen(s) - 1;
	for (i = 0; i <= (len / 2); i++)
	{
		pa = &s[i];
		temp = *pa;
		*pa = *(pa + len - (2 * i));
		*(pa + len - (2 * i)) = temp;
	}
}
