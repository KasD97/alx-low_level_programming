#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments
 * it receives
 * @argc: no. of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int y;

		for (y = 0; y < argc; y++)
		{
			printf("%s\n", argv[y]);
		}
	}
	return (0);
}
