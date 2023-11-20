#include "lists.h"
/**
 * pop_listint - pops the list's head
 * @head: the list
 * Return: the data of the head
 */
int pop_listint(listint_t **head)
{
listint_t *tmp1= *head;
listint_t *tmp2= tmp1->next;
if(head == NULL)
return (0);
free(*head);
*head=tmp2;
return (tmp1->n);
}
