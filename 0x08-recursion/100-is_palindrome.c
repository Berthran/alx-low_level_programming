#include "main.h"


char *get_last_char(char *s);

int compare_chars(char *str1, char *str2);

/**
 * is_palindrome - a function that checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */


int is_palindrome(char *s)
{
	/*
	 * A palindrome is a word or phrase or other sequence of
	 * characters that reads the same forward as backward.
	 * In other words, a palindrome remains unchanged
	 * when its characters are reversed.
	 */

	/* Algorithm I */
	/*
	 * Function I - iterates through each character of the string L -> R
	 * Function II - iterates through each character of the string R -> L
	 * Termination I - Terminate recursion when function II
	 * is ahead of function I by one character.
	 * Terminaion II - Terminate recursion if there is at
	 * least one character difference between functions I and II.
	 */

	char *ptr_last_char;

	if (*s == '\0')
		return (1); /* Empty string is a palindrome */

	ptr_last_char = get_last_char(s);

	if (compare_chars(s, ptr_last_char) == 0)
		return (0); /* No palindrome found */
	return (1); /* Palindrome found */

}


/**
 * get_last_char - points to the last character of the string
 * @s: string to handle
 *
 * Return: pointer to the last character of the string
 */


char *get_last_char(char *s)
{
	if (*s == '\0')
		return (--s);
	++s;
	return (get_last_char(s));
}


/**
 * compare_chars - compares the characters at opposite ends of a string
 * @str1: first string
 * @str2: second string
 *
 * Return: 1 if match and 0 if no match
 */

int compare_chars(char *str1, char *str2)
{
	if (*str1 != *str2)
		return (0); /* Letters at opp. end do not match */
	else if (str1 > str2)
		return (1); /* Search boundary reached */
	str1++;
	str2--;
	return (compare_chars(str1, str2));
}
