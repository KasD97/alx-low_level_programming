#include "main.h"
/**
 * _memcpy - copies memory area from
 * one location to another
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
