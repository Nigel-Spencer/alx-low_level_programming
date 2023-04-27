#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of a linked list
 * @h: The pointer to the linked list to print
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
