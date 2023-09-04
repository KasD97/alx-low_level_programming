#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combines two strings
 * @s1: 1st input
 * @s2: 2nd input
 * Return: 0;
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		len1++, a++;
	while (s2[b])
		len2++, b++;
	len2++;

	s3 = malloc((len1 + len2) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	a = 0, b = 0;

	while (a < len1)
	{
		s3[a] = s1[a];
		a++;
	}
	while (b < len2)
	{
		s3[a] = s2[b];
		a++, b++;
	}
	return (s3);
}
