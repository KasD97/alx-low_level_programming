#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *fluffy;
	int i, j, k;
	char *n, *m;

	fluffy = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(fluffy);
		return (NULL);
	}
	m = malloc(sizeof(char) * j + 1);
	if (m == NULL)
	{
		free(m);
		free(fluffy);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		m[k] = owner[k];

	fluffy->name = n;
	fluffy->age = age;
	fluffy->owner = m;

	return (fluffy);
}
