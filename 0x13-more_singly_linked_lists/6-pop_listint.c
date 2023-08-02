#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * of the list.
 * @headnode: headnode
 * Return: the data in the deleted
 * node.
 */

int pop_listint(listint_t **headnode)
{
listint_t *tmp;
int data;

if (*headnode == NULL)
return (0);

tmp = *headnode;
data = tmp->n;


*headnode = (*headnode)->next;
free(tmp);
return (data);
}
