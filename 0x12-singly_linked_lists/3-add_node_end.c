#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: none
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int m;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (m = 0; str[m]; m++)
		;

	new->len = m;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
