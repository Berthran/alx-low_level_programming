#include "main.h"

/**
 * print_alphabet - prints the english alphabet in lower case
 * letters - a varable to contain the english alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	/* local variable definition */
	char letters;

	/*Conditional statement*/
	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}
