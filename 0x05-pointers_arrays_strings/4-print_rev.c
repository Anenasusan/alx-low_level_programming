#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @a: the used string reference pointer
 * Return: 0
 */

void print_rev(char *a)
{
	int i = 0;

	while (a[i])
		i++;
	while (i--)
		_putchar(a[i]);
	_putchar('\n');
}
