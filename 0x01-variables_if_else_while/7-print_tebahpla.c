#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the english alphabet in lower case backwards
 * letters - a varable to contain the english alphabets
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	char letters;

	/*Loop statement to display Lowercase*/
	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
