#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: head pointer of the listint_t
 *
 * Return: data of the head node (n)
 * return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
