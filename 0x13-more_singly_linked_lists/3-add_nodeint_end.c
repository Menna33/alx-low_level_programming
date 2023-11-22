#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of the list
 * @head: the list
 * @n: the data of new element
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tmp;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
*head = new;
}
else
{
tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
}
return (new);
}
