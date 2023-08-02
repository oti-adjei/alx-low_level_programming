#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @headnode: pointer to the first node found in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **headnode)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*headnode)
{
next = (*headnode)->next;
(*headnode)->next = prev;
prev = *headnode;
*headnode = next;
}

*headnode = prev;

return (*headnode);
}
