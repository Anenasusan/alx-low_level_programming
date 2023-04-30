#include <stdio.h>
/**
 * main -  Prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= 99)
	{
		putchar(c / 10 + '0');
		putchar(c % 10 + '0');
		if (c != 99)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
putchar('\n');
return (0);
}
