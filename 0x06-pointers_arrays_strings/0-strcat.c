#include "main.h"
#include <string.h>

/**
 * _strcat -  concatenatws two strings
 * @dest: variable to hold concatenated string
 * @src: variable holding string to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *pd = dest;
	char *ps = src;
	int len_dest = strlen(dest);
	int len_src = strlen(src);
	int i;

	for (i = 0; i < len_src; i++)
		pd[i + len_dest] = ps[i];
	return (pd);
}
