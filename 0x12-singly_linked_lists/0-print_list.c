#include "lists.h"

/**
 * print_list - will print all the elements of a list_t list
 * @h: singly linked list
 * Return: no. of elements in list
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
