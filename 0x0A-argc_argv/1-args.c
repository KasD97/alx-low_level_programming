#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments
 * passed to it
 * @argc: no. of args
 * @argv: array of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	void argv;
	printf("%d\n", argc - 1);
	return (0);
}
