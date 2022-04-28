#include "main.h"
/**
 * _strlen_recursion - the size.
 * @s: pointer to the string parameter.
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p - palindrome.
 * @s: pointer to string.
 * @m: position
 * Return: boolena
 */
int p(char *s, int m)
{
	if (m < 1)
	{
		return (1);
	}

	if (*s == *(s + 1))
	{
		return (p(s + 1, m - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome, empty string.
 * @s: pointer to string.
 * Return: recursion.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));
}
