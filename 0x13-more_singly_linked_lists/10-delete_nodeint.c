#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @headnode: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **headnode, unsigned int index)
{
listint_t *temp = *headnode;
listint_t *current = NULL;
unsigned int i = 0;

if (*headnode == NULL)
return (-1);


if (index == 0)
{
*headnode = (*headnode)->next;
free(temp);
return (1);
}

while (i < index - 1)
{
if ((!temp->next) || !temp)
return (-1);
temp = temp->next;
i++;
}

current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
