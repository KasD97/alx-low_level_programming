#include "main.h"
/**
 * _memcpy - copies memory area from
 * one location to another
 * @dest: memory storage
 * @src: where memory is copied
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
