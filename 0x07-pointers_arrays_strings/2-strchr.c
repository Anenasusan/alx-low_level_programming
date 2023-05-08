#include "main.h"
/**
 * _strchr - Prints from the first occurrence of a char.
 * @s: source string
 * @c: tested character
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
