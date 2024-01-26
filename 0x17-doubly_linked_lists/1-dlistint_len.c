#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: first node pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
