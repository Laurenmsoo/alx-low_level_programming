#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of the linked list, listint_t
 * @head: pointer head of the linked list
 * @n: element to be added to the end of the linked list
 *
 * Return: pointer to the new element,
 * return: NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newElement;
	listint_t *temp = *head;

	newElement = malloc(sizeof(listint_t));
	if (!newElement)
		return (NULL);

	newElement->n = n;
	newElement->next = NULL;

	if (*head == NULL)
	{
		*head = newElement;
		return (newElement);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newElement;

	return (newElement);
}
