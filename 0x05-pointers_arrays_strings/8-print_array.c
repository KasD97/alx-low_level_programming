#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: name of array
 * @n: number of elements of array to be printed
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}
