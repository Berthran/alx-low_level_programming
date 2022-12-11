#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the hexadeximals
 * letters - a varable to contain the hexadecimals
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	char letters;

	/*Loop statement to display Lowercase*/
	for (letters = '0'; letters <= '9'; letters++)
		putchar(letters);
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
