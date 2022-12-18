#include "main.h"

/**
 * print_numbers - prints 0 - 9
 * Return: 0123456789
 */
void print_numbers(void)
{
	char num[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(num[i]);
	_putchar('\n');
}
