#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head node
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int result;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		result = *h - (*h)->next;
		if (result > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
			break;
		}
	}

	*h = NULL;

	return (n);
}
