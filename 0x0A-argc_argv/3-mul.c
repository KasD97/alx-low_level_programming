#include <stdio.h>
#include "main.h"

/**
 * main - will multiply 2 numbers
 * @argc: no. of arguments
 * @argv: arguments array
 * Return: 0 or 1;
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multi = _atoi(argv[i]) * _atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
