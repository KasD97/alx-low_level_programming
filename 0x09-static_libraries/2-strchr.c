#include "main.h"
/**
 * _strchr - finds a character in a string
 * @s: input
 * @c: input
 * Return: Always 0(Success)
 */

char *_strchr(char *s, char c)
{
	int l = 0;

	for (; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
			return (&s[l]);
	}
	return (0);
}
