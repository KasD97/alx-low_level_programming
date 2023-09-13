#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: array arg
 * @size: size of array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (q = 0; q < size; q++)
		if (cmp(array[q]))
		{
			return (q);
		}
	return (-1);
}
