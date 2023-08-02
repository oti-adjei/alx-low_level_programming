#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
int free_listint_safe(listint_t **headnode)
{
 int length = 0;
 int difference;
 listint_t *temp;

 if (!headnode || !*headnode)
 return (0);

 while (*headnode)
 {
 difference = *headnode - (*headnode)->next;
 if (difference > 0)
 {
 temp = (*headnode)->next;
 free(*headnode);
 *headnode = temp;
 length++;
 }
 else
 {
 free(*headnode);
 *headnode = NULL;
 length++;
 break;
 }
 }

 *headnode = NULL;

 return (length);
}

