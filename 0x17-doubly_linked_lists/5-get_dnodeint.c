#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: head ptr
 * @index: nth node index
 * Return: address of the node, or NULL if it does not exist,
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
