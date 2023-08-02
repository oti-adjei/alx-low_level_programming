#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @headnode: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
int print_listint_safe(const listint_t *headnode)
{
int number = 0;
long int diff;

while (headnode)
{
diff = headnode - headnode->next;
number++;
printf("[%p] %d\n", (void *)headnode, headnode->n);
if (diff > 0)
headnode = headnode->next;
else
{
printf("-> [%p] %d\n", (void *)headnode->next, headnode->next->n);
break;
}
}

return (number);
}
