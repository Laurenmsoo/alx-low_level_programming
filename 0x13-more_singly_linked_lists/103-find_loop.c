#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer
 *
 * Return: address of the node where the loop starts,
 * return NULL if it fails
 */
listint_t *find_listint_loop(listiniit_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
