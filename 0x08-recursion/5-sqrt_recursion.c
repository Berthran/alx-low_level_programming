#include "main.h"
#include <stdio.h>

int _sqrt(int base, int count);

int sqr(int num);

/**
 * _sqrt_recursion - finds and returns the square root of a number
 * @n: the number to find its root
 *
 * Return: natural square root of the number "n" or -1
 */

int _sqrt_recursion(int n)
{
	/* The natural sqrt "x" of a number "y" is a value "x"
	 * lower than that number "y" that gives the number "y"
	 * when "x" is multiplied by itself
	 */
	int count = 0;

	if (n <= 0)
		return (-1);
	return _sqrt(n, count);

}


int _sqrt(int base, int count)
{
	if (base <= 0)
		return (-1); /* NO SQUAREROOT FOUND */

	if (sqr(base) == (base + count))
		return (base);
	count++;
	return(_sqrt(base - 1, count));

}

int sqr(int num)
{
	return (num * num);
}












