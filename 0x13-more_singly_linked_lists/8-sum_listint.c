#include "lists.h"

/**
 * sum_listint - sum all the data in a
 * linked list
 * @headnode: headnode
 * Return: the sum
 */

int sum_listint(listint_t *headnode)
{
int sum = 0;
listint_t *tmp = headnode;

while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}

return (sum);
}
