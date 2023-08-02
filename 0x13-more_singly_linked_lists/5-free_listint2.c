#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free the list
 *
 * @headnode: head node
 * Return: Nothing
 */

void free_listint2(listint_t **headnode)
{
listint_t *tmp;

if (headnode == NULL)
return;

while (*headnode)
{
tmp = (*headnode)->next;
free(*headnode);
*headnode = tmp;
}
*headnode = NULL;
}
