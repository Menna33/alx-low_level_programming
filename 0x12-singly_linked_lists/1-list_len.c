#include "lists.h"
/**
 * list_len - prints list's length
 * @h: the list
 * Return: integer the size of the list
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
