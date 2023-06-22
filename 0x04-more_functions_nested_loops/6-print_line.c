#include "main.h"

/**
 * print_line - Print straight line
 * @n: argument
 * Return: Nothing
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n--)
{
_putchar('_');
}
_putchar('\n');
}
}
