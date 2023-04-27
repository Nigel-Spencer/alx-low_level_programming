#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Gives the number of elements in a linked list
 * @h: The pointer to the linked list
 *
 * Return: The number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
