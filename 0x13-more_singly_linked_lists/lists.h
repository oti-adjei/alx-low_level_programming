#ifndef LISTS_H
#define LIST_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int print_listint(const listint_t *h);
int listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **headnode, const int n);
listint_t *add_nodeint_end(listint_t **headnode, const int n);
void free_listint(listint_t *headnode);
void free_listint2(listint_t **headnode);
int pop_listint(listint_t **headnode);
listint_t *get_nodeint_at_index(listint_t *headnode, unsigned int index);
int sum_listint(listint_t *headnode);
listint_t *insert_nodeint_at_index(listint_t **headnode, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **headnode, unsigned int index);
listint_t *reverse_listint(listint_t **headnode);
int print_listint_safe(const listint_t *headnode);
int free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *headnode);

#endif
