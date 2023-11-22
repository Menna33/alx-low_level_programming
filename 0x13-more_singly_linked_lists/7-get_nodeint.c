#include "lists.h"
/**
 * get_nodeint_at_index - pops the list's head
 * @head: the list
 * @index: the desired index
 * Return: the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *tmp = head;
while (count != index && tmp)
{
tmp = tmp->next;
count++;
}
return (tmp);
return (NULL);
}
