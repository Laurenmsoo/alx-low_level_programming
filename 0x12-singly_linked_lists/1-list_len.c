#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of nodes in the linked list list_t
 * @h: the linked list pointer
 *
 * Return: number of elements in the list
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
