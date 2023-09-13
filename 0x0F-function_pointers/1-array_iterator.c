#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * given as a parameter
 * @array: array arg
 * @size: size of array
 * @action: a pointer to the function to be used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t q;

	if (array && size)
		for (q = 0; q < size; q++)
			action(array[q]);
}
