#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: minimum in array of integers
 * @max: maximum in array of integers
 * Return: pointer to the newly created array,
 * if min>max, NULL
 */

int *array_range(int min, int max)
{
	int *pointer;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		pointer[a] = min++;

	return (pointer);
}
