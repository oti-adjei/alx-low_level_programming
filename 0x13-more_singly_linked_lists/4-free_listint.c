#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free list
 * @headnode: head node
 *
 * Return: Nothing
 */

void free_listint(listint_t *headnode)
{
listint_t *tmp;

while (headnode)
{
tmp = headnode->next;
free(headnode);
headnode = tmp;
}

}
