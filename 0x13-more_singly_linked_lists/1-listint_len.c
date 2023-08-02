#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of
 * elements in the linked list
 * @headnode: head node
 * Return: int
 */

int listint_len(const listint_t *headnode)
{
int counter = 0;
const listint_t *tmp = headnode;

while (tmp != NULL)
{
counter++;
tmp = tmp->next;
}

return (counter);
}
