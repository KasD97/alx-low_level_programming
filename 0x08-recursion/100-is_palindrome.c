#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return ();
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string to get length for
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if(*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks whether left and right sides
 * of the string match
 * @l: left index
 * @r: right index
 * Return: 1 if palindrome, 0 if not
 */

int Check_palindrome(char *l, char *r)
{
	if (l > r)
		return (1);
	if (*l == *r)
		return (check_palindrome(l + 1, r - 1));
	return (0);
}
