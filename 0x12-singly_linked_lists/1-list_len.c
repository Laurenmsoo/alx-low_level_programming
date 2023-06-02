#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: pointer to the list_t list
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
size_t number = 0;

while (h)
{
number++;
h = h->next;
}
return (number);
}
