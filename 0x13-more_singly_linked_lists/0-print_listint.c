#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a
 * list
 *
 * @headnode: head node
 * Return: the number of nodes
 */

int print_listint(const listint_t *headnode)
{
int count = 0;

while (headnode)
{
printf("%d\n", headnode->n);
count++;
headnode = headnode->next;
}

return (count);
}
