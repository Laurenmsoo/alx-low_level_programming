#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = preiousv;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
