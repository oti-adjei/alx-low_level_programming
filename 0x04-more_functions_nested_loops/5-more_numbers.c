#include "main.h"

/**
 * more_numbers - Print numbers
 * between 0 and 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
int j = 0;

while (j < 10)
{
int i = 0;
while (i <= 14)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
i++;
}
_putchar('\n');
j++;
}
}
