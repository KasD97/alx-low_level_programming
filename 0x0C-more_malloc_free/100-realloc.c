#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates memory block
 * usinng malloc and free
 * @ptr: a pointer to memory prev allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size of type in bytes of the new memory block
 * Return: pointer to allocated memory or NULL otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memory;
	char *space = ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);
		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	memory = malloc(new_size);
	if (memory == NULL)
		return (NULL);

	for (j = 0; j < old_size; j++)
		memory[j] = space[j];
	free(space);

	return (memory);
}
