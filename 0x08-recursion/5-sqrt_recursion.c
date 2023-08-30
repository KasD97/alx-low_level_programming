#include "main.h"

int get_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: input number to get square root of
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sqrt_recursion(n, 0));
}

/**
 * get_sqrt_recursion - gets square root of a number
 * recursively
 * @n: number to get square root of
 * @i: iterator
 * Return: square root of number
 */

int get_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (get_sqrt_recursion(n, i + 1));
}
