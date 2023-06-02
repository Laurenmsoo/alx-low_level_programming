#include <stdlib.h>
#include "lists.h"
/**
* free_list - frees linked list list_t
* @head: linked list to free
*/
void free_list(list_t *head)
{
list_t *current;

while (head)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
}
