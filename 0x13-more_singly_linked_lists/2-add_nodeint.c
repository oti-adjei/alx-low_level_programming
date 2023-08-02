#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning
 * of a list
 * @headnode: head node
 * @n: node value
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **headnode, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *headnode;
*headnode = new_node;

return (new_node);

}
