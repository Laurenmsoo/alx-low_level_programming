#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a
 * given index in a linked list
 * @head: pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 for Success, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *n = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	n = temp->next;
	temp->next = n->next;
	free(n);

	return (1);
}
