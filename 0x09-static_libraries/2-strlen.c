#include "main.h"
/**
 *_strlen - Returns the length of a string
 * @s: String
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
