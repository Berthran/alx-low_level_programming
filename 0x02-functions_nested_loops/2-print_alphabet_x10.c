#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet in lower case 10 times
 * letters - a varable to contain the english alphabets
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{
	/* local variable definition */
	char letters;
	int iter;

	/*Conditional statement*/
	for (iter = 1; iter <= 10; iter++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
		_putchar('\n');
	}
}
