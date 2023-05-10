#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char C to stdout
 *@c: the Char to print
 *
 *Return: on success 1.
 *on Error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
