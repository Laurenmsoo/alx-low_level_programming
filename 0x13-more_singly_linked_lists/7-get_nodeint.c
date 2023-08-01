#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of the linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node
 *
 * Return: nth node of the list,
 * return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
