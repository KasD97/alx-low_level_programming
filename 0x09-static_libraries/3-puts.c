#include "main.h"
/**
 * _puts - print a string then a new line
 * @str: string to be print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
