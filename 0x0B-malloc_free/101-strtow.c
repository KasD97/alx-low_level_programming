#include <stdlib.h>
#include "main.h"
/**
 * count_word - function to count no. of words
 * in a string
 * @s: string
 * Return: word count
 */
int count_word(char *s)
{
	int flag, a, z;

	flag = 0;
	z = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}
	return (z);
}
/**
 * **strtow - function that splits a string into
 * words
 * @str: string
 * Return: pointer to an array of strings or NULL
 * otherwise
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int l, m = 0, length = 0, words, c = 0, start, end;

	while (*(str + len))
	{
		length++;
	}
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (l = 0; l <= length; l++)
	{
		if (str[l] == '' || str[l] == '\0')
		{
			if (c)
			{
				end = l;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - c;
				m++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = l;
	}
	matrix[m] = NULL;

	return (matrix);
}
