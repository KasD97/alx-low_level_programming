#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which contains a copy of the
 * string given as a parameter
 * @str: char
 * Return: Pointer to dup. string or NULL otherwise
 */
char *_strdup(char *str)
{
	char *sss;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	sss = malloc(sizeof(char) * (i + 1));

	if (sss == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		sss[j] = str[j];

	return (sss);
}
