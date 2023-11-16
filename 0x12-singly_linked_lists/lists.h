#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list_t - singly linked list
 * @str: string that holds data
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_t{
char *str;
int len;
struct list_t *next;
}list_t;
typedef long unsigned size_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
