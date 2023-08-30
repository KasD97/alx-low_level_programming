#include "main.h"
/**
 * _strien_recursion - returns the length of a string
 * @s: input string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
