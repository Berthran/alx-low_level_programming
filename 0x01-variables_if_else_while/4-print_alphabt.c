#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the english alphabet except the letters 'e' and 'q'
 * letters - a varable to contain the english alphabets
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	char letters;

	/*Loop statement to display Lowercase*/
	for (letters = 'a'; letters <= 'z'; letters++)
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	putchar('\n');
	return (0);
}
