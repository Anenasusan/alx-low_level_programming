#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @j: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero,
 *         else, 0 (if the number is zero),
 *         else, -1 (if the number is less than zero).
 */
int print_sign(int j)
{
	if (j > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (j == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
