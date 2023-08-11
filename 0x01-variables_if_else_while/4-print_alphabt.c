#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet in lowercase except e and q
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
