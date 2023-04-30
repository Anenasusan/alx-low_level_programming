#include <stdio.h>
/**
 * main - Prints the Numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nums;

for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
}
putchar('\n');
return (0);
}
