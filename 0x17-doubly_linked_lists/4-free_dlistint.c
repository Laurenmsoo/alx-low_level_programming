#include "lists.h"

/**
 * free_dlistint - frees the linked lidt
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
