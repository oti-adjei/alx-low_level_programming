#include "main.h"

/**
 * _strcat - Concantenates two strings
 * @*dest pointer to first value of string
 * @*src pointer to first value of string
 * @dest: first argument
 * @src: second argument
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
/**Length of dest*/
int dest_len = 0, i;
while (dest[dest_len] != '\0')
{
dest_len++;
}

for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';

return (dest);
}

