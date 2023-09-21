#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: head of the linked list
 * @str: string to be duplicated/stored
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int z;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (z = 0; str[z]; z++)
		;

	new->len = z;
	new->next = *head;
	*head = new;

	return (*head);
}
