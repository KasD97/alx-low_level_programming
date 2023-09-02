#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name
 * followed by a new line
 * @argc: no. of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
