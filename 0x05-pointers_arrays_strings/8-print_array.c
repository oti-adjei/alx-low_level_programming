#include <stdio.h>

/**
 * print_array - Prints elements in an array
 * in particular format
 *
 * @a: Array
 * @n: number of elements in the array
 *
 * Return - nothing
 */

void print_array(int *a, int n)
{
int i;
int *p;
p = a;

for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", *p);
}
else
{
printf("%d", *p);
}
p++;
}
printf("\n");
}
