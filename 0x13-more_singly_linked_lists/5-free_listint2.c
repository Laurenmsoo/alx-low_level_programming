#include "lists.h"

/**
 * free_listint2 - frees a linked list, listint_t
 * @head: pointer tothe linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
