#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print nos. followed by new line
 * @separator: string to be print  between numbers
 * @n: no. of integers
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int j;

	va_start(nums, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(nums, int));

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
