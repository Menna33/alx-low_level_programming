#include "lists.h"
/**
 * listint_len - returns the list's size
 * @h: the list
 * Return: integer the size of the list
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
