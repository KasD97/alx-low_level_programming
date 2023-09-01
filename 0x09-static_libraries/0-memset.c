#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting location of memory to be filled
 * @b: value desired
 * @n: no. of bytes to change
 * Return: Pointer to the memory area "s"
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
