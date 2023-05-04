#include "main.h"
/**
 *_strcat - A function that concatenates two strings.
 *@dest: String that will append.
 *@src: String that will be concatenated upon.
 *
 *Return: returns pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	int length, j; /* j will hold the length of the source */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
