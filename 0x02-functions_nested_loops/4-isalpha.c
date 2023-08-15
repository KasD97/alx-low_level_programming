#include "main.h"
/**
 * _isalpha - checks for alpha characters
 * @c: Character to be checked
 * Return: 1 for alpha characters or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
