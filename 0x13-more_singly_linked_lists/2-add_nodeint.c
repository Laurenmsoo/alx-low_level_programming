#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list, listint_t
 * @head: pointer to the head node
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node
 * return: NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
