#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: no. of args
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, z;
	char *file = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (z = 0; z < bytes; z++)
	{
		printf("%02x", file[z] & 0XFF);
		if (z != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
