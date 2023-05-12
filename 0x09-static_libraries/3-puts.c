#include "main.h"
/**
 *_puts - Prints a string
 * @str: String to print
 *
 * Description: Prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
