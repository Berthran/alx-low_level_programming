#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two nunbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two nunbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two nunbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two nunbers
 * @a: first number
 * @b: second number
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulusbof two numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
