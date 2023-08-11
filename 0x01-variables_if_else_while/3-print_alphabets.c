#include <stdio.h>
/**
 * main - Entry point
 * Decription: 'Prints alphabet in lower then uppercase'
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
