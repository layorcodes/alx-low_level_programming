#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - length string.
 * @str: pointer
 *
 * Return: integer.
 */
int _strlen_recursion(char *str)
{
	int a;

	if (*str == '\0')
		return (0);
	str++;
	a = 1 + _strlen_recursion(str);
	return (a);
}
/**
 * _palindrome - function for empty string
 * @j: integer.
 * @k: integer.
 * @p: pointer.
 *
 * Return: integer.
 */
int _palindrome(int k, int j, char *p)
{
	if (j > k / 2)
		return (1);
	else if (p[j] != p[k - j - 1])
		return (0);
	else
		return (_palindrome(k, j + 1, p));
}
/**
 * is_palindrome - function
 * @s: pointer to s.
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int c;
	int r;

	c = _strlen_recursion(s);
	r = _palindrome(c, 0, s);
	return (r);
}

