#include "main.h"

/**
 * _isupper - define if a char is uppercase
 *
 * Description: Prints the alphabet with _putchar
 * @c: char
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
