#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * of a linked list
 * @headnode: head node
 * @n: nodevalue
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **headnode, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *headnode;

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*headnode == NULL)
{
*headnode = new_node;
return (new_node);
}

while (current->next != NULL)
{
current = current->next;
}


current->next = new_node;

return (new_node);
}
