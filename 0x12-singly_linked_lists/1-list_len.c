#include "lists.h"

/**
 * list_len - returns no. of elements in a list
 * @h: a singly linked list
 * Return: none
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
