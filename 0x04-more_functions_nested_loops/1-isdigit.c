#include "main.h"

/**
 * _isdigit - Checks for digit
 *
 * Description: Define if a char is a number
 * @c: char
 * Return: 1 yes 0 no
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
