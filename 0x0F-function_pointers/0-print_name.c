#include "function_pointers.h"
/**
 * print_name -function that prints a name
 * @name: name
 * @f: pointer to function
 * Return: nothhing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
