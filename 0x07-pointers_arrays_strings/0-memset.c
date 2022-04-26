#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: the memory area
 * @b: the onstant byte.
 * @n: bytes to be filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(s + m) = b;

	return (s);
}
