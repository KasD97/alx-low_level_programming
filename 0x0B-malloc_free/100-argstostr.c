#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concats all arguments of program
 * @ac: no. of args
 * @av: args to concat
 * Return: pointer to string or NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	char conct;
	int p, q, r, s, t, count = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			count++;
		}
		count++;
	}
	count++;

	conct = malloc(count * sizeof(char));
	if (conct == NULL)
		return (NULL);

	r = 0, t = 0;

	while (r < ac)
	{
		for (s = 0; av[r][s] != '\0'; s++)
		{
			conct[t] = av[r][s];
			t++;
		}
		conct[t] = '\n';
		t++, r++;
	}
	conct[t] = '\0';
	return (conct);
}
