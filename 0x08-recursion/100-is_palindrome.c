#include "main.h"

/**
* is_palindrome - Returns true if the string is a palindrome
*@s: string to be checked
*Return: 1 if the string is a palindrome
*/

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - checks for a palindrome string.
 * @s: the string to be checked.
 * @len: the length of s.
 * @index: the index of the string to be checked.
 *
 * Return: - 1 if the string is a palindrome.
 *         -0 if the string is not a palindrome.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
