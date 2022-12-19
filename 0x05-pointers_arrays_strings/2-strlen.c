#include "main.h"

/**
 * _strlen - counts the number of characters in a string
 * @s: string character
 *
 * Return: an int num representing the number of charactets in the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}
