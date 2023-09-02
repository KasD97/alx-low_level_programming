#include "main.h"
/**
 * _islower - function to checks for lowercase character
 * @c: The char to be checked
 * Return: 1 for lowercase character and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
