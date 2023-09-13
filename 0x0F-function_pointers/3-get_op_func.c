#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - chooses the correct operation
 * @s: operator arg
 * Return: pointer, NULL otherwise
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int z = 0;

	while (ops[z].op)
	{
		if (*s == *ops[z].op)
		{
			return (ops[z].f);
		}
		z++;
	}
	return (NULL);
}
