#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: base number
 * @y: power to raise numbet to
 * Return: return the exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
