#include "lists.h"
/**
 * print_list - prints list's data
 * @h: the list
 *
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
int count = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf ("[%d] %s\n",h->len,h->str);
h = h->next;
count++;
}
return (count);
}
