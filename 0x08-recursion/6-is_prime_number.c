#include "main.h"
#include <stdio.h>

int prime_checker(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime and 0 if not
 */


int is_prime_number(int n)
{
	/**
	 * A prime number is a number that can be divided
	 * only by itself and 1
	 */

	int i = 2;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_checker(n, i));
}


/**
 * prime_checker - divides number by lower numbers
 * @n: number to divided with lower numbers
 * @i: the lower numbers
 *
 * Return: True or False
*/

int prime_checker(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i >= n / 2)
		return (1);
	else
		return (prime_checker(n, i + 1));
}
