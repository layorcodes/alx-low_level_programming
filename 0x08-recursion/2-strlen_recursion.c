#include "main.h"

/**
 * _strlen_recursion - return the length of string.
 * @s: te string.
 *
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	int m;

	if (*s == '\0')
		return (0);

	m = _strlen_recursion(s + 1) + 1;
	return (m);
}
