#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name
 * followed by a new line
 * @argc: no. of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	print("%s\n", *argv);
	return (0);
}
