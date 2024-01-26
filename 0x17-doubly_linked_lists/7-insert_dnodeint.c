#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a node in the postion idx
 * @h: head ptr
 * @n: The data integer
 * @idx: position to add the node
 * Return: new node ptr
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *n_node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (node_node == NULL)
			return (NULL);
		n_node = n_node->next;
	}

	if (n_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = n_node->next;
	new_node->prev = n_node;
	n_node->next->prev = new_mem;
	n_node->next = new_node;

	return (new_node);
}
