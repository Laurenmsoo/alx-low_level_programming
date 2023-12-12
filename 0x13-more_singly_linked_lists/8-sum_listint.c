#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 * @head: pointer to the first node of the linked list
 *
 * Return: the sum
 * return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
