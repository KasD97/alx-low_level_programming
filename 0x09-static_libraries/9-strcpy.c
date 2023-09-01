#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int j = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for (; j < k; j++)
	{
		dest[j] = src[j];
	}
	dest[k] = '\0';
	return (dest);
}
