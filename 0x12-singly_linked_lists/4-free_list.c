#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the first node in the list
 * @str: the data of the node
 * return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = sizeof(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
last = *head;
while(last)
{
last = last->next;
}
last->next = new;
return (*head);
}
