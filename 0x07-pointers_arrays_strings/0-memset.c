#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Source string
 * @b: Contant byte for filling
 * @n: Lenght of buffer
 * Return: New string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
