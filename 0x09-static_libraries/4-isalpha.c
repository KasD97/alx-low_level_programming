#include "main.h"
/**
 * _isalpha - function that checks for alpha characters
 * @c: Character to check
 * Return: 1 for alpha characters and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
