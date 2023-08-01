#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: linked head pointer
 * @n: integer to be added to the list
 *
 * Return: the new element address
 * return: NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
