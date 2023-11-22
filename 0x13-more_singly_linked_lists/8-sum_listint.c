#include "lists.h"
/**
 * sum_listint -  returns the sum of linked list
 * @head: the list
 * Return: the sum of the data of the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp = head;
while (tmp)
{
sum = sum + tmp->n;
tmp = tmp->next;
}
return (sum);
}
