#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * using malloc
 * @nmemb: no. of members in array
 * @size: size in bytes
 * Return: pointer to allocated memory, NULL if nmemb or
 * size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		memory[i] = 0;

	return (memory);
}
