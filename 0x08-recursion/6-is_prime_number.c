#include "main.h"

int get_prime(int n, int i);

/**
 * is_prime_number - confirms if number is a prime number
 * or not
 * @n: number to confirm
 * Return: 1 if number is prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}

/**
 * get_prime - confirms if number is a prime number
 * or not
 * @n: number
 * @i: iterator
 * Return: if prime, return 1, return 0 if not
 */

int get_prime(int n, int i)
{
	if (1 == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (get_prime(n, i - 1));
}
