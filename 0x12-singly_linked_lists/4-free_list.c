#include "lists.h"
/**
 * free_list -frees a list_t list.
 * @head: the first node in the list
 * return: void
 */
void free_list(list_t *head)
{
list_t *tmp;
if (head == NULL)
return;
tmp = head->next;
free(head);
head = tmp;
}
