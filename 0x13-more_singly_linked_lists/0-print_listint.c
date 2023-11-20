#include "lists.h"
/**
 * print_list - prints list's data
 * @h: the list
 * Return: integer the size of the list
 */
size_t print_listint(const listint_t *h)
{
int count = 0;
if (h == NULL)
return (0);
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
