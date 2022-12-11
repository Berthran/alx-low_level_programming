#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the english alphabet in lower case
 * 
 * ldigit: the last digit on n
 * Return: 0
 */
int main(void)
{
	/* local variable definition */
	char letters;

	/*Conditional statement*/
	for (letters = 'a'; letters <= 'z'; letters++)		
		putchar(letters);
	putchar('\n');
	return (0);
}
