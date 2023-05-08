#include "main.h"
/**
 * _memcpy - Fills memory with another buffer.
 * @dest: Source string
 * @src: String for filling
 * @n: Lenght of buffer
 * Return: New string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
