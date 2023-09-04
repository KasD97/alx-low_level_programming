#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: array size
 * @c: character to assign
 * Return: pointer to array or NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	
	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
