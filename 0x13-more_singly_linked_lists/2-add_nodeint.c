#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of the list
 * @head: the list
 * @n: the data of new element
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(*head));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
