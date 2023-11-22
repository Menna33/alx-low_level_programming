#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the list
 * @idx: the index to insert in
 * @n: the data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *tmp, *tmp1 = *head;
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL || head == NULL)
return (NULL);
while (tmp && count != idx)
{
tmp1 = tmp;
tmp = tmp->next;
count++;
}
new->next = tmp;
new->n = n;
tmp1->next = new;
return (new);
}
