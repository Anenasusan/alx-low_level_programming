#include <stdio.h>
/**
 * main - Prints the Alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
