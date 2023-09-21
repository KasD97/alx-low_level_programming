#include "lists.h"
/**
 * free_list - free a list.
 * @head: head of linked list.
 * Return: none.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
