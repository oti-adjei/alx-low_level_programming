#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - returns the nth node of
 * de
 * a linked list
 *
 * @headnode: head node
 * @idxl: index of the list where the new node should be
 * added
 * @nd: value of new node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **headnode, unsigned int idxl, int n)
{
listint_t *tmp = *headnode;
listint_t *new_node = malloc(sizeof(listint_t));
unsigned int count = 0;

if (!new_node || !headnode)
return (NULL);

new_node->n = n;


if (count == idxl)
{
new_node->next = *headnode;
*headnode = new_node;
return (new_node);
}


while (tmp)
{
if ((idxl - count) == 1)
{
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}

count++;
tmp = tmp->next;
}



return (NULL);
}
