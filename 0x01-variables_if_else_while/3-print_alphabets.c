#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the english alphabet in lower case and then uppercase	
 * letters - a varable to contain the english alphabets
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	char letters;

	/*Loop statement to display Lowercase*/
	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
