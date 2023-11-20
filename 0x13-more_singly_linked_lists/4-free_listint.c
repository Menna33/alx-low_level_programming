#include "lists.h"
/**
 * free_listint - frees the list
 * @head: the list
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head;
free(head);
head = tmp->next;
}

}
