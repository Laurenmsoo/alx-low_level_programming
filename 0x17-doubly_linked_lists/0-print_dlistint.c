#include "lists.h"

/**
 * print_dlistint- Prints all the elements of a dlinked list
 * @h: head node pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
