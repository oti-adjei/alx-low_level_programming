#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(args);

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);

if (str)
{
printf("%s", str);
}
else
printf("(nil)");


if (separator && i < n - 1)
{
printf("%s", separator);
}

}
printf("\n");
va_end(args);
}
