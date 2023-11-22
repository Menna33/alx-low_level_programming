#include "lists.h"
/**
 * free_listint - frees the list
 * @head: the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp1, *tmp2;
if (!head)
return;
tmp1 = *head;
while (tmp1)
{
tmp2 = tmp1;
tmp1 = tmp1->next;
free(tmp2);
}
*head = NULL;
}
