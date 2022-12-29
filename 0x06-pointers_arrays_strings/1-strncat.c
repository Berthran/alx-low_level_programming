#include "main.h"
#include <string.h>

/**
 * _strncat -  concatenatws two strings
 * @dest: variable to hold concatenated string
 * @src: variable holding string to concatenate
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = strlen(dest);
	int len_src = strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < len_src)
			dest[i + len_dest] = src[i];
		else
			break;
	}
	return (dest);
}
