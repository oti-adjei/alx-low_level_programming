#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: the character to print
=======
 * @c: The character to print
>>>>>>> eaaebf44008306acf14bc9316313e78c7b335efc
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
