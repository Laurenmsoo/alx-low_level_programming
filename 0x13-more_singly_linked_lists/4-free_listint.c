#include "lists.h"

/**
 * free_listint - frees th list
 * @head: the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
