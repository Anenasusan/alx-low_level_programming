#include "main.h"

/**
 * _isalpha - Function to check if a char is an alphabet
 * @c: The char to be checked.
 *
 * Return: 1 if char is a letter(lowercase or uppercase) or else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

