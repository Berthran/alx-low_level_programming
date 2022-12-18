#include "main.h"

/**
 * print_most_numbers - prints 0 - 9
 * Return: 01356789
 */
void print_most_numbers(void)
{
	char num[] = "01356789";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(num[i]);
	_putchar('\n');
}
