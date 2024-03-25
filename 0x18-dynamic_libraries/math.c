/** CODE to implement dynamic linking of C program to Python */
#include <stdio.h>


/**
 * add - adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of the numbers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - finds the difference between two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of the numbers
 */

int sub(int a, int b)
{
        return (a - b);
}

/**
 * mul - multiplys two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of the numbers
 */

int mul(int a, int b)
{
        return (a * b);
}

/**
 * div - divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient of the numbers
 */

int div(int a, int b)
{
        return (a / b);
}

/**
 * mod - finds the modulus of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: divisor of the numbers
 */

int mod(int a, int b)
{
        return (a % b);
}


