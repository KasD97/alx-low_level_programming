#include "main.h"
/**
 * _isdigit - Checks whether a digit is between
 * 0 and 9
 * @c: The char to check
 * Return: 1 for a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
