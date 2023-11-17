#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

        head = NULL;
    add_node(&head, "Best");
    add_node(&head, "School");
    print_list(head);
    return (0);
}
