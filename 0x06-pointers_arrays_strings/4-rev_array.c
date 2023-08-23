#include "main.h"
/**
 * reverse_array - reverse content of an array of integers
 * @a: array
 * @n: no. of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
