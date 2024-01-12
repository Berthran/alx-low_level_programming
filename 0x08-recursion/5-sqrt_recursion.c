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
	/*
	 * The natural sqrt "x" of a number "y" is a value "x"
	 * lower than that number "y" that gives the number "y"
	 * when "x" is multiplied by itself
	 */
	int prev_num = 1;

	if (n <= 0)
		return (-1);
	return (_sqrt(n, prev_num));

}


/**
 * _sqrt - compares the square of numbers with base number
 * @base: number to find the square root
 * @prev_num: variable to represent numbers before base
 *
 * Return: the square root of the number
 */

int _sqrt(int base, int prev_num)
{
	int sqr;

	sqr = prev_num * prev_num;

	if (prev_num >= base / 2)
		return (-1); /* NO NATURAL SQUARE ROOT*/
	else if (sqr == base)
		return (prev_num); /* NATURAL SQUARE ROOT FOUND */
	return (_sqrt(base, prev_num + 1));
}


/**
 * sqr - returns the square of a number
 * @num: number to square
 *
 * Return: number * number
 */

int sqr(int num)
{
	return (num * num);
}
