#include "main.h"

/**
 * print_rev - prints a string in reverse , followed by a new line
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
