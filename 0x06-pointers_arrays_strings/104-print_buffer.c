#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int k, j, i;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int l = *(b + k + i);

			if (l < 32 || l > 132)
			{
				l = '.';
			}
			printf("%c", l);
		}
		printf("\n");
		k += 10;
	}
}
