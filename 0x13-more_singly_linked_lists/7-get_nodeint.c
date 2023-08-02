#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a linked list
 * @headnode: headnode
 * @index: expected node index
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *headnode, unsigned int index)
{
unsigned int count = 0;
listint_t *tmp = headnode;

while (tmp)
{
count++;
if ((count - 1) == index)
{
return (tmp);
}
tmp = tmp->next;
}

return (NULL);
}
