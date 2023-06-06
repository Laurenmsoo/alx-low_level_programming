#include "lists.h"

/**
 * sum_listint - finds the sum of all the data in a linked list
 * @head: pointer to the head node
 *
 * Return: the sum
 * return :0 if list is empty
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
