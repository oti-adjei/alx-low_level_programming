#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @headnode: headnode of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *headnode)
{
	listint_t *p2;
	listint_t *prev;

	p2 = headnode;
	prev = headnode;
	while (headnode && p2 && p2->next)
	{
		headnode = headnode->next;
		p2 = p2->next->next;

		if (headnode == p2)
		{
			headnode = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->next != headnode && p2->next != prev)
				{
					p2 = p2->next;
				}
				if (p2->next == headnode)
					break;

				headnode = headnode->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}
