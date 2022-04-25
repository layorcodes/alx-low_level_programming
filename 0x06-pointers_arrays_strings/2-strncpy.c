#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination parameter.
 * @src: second parameter.
 * @n: number of bytes.
 * Return: dest parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	for ( ; m < n; m++)
		dest[m] = '\0';

	return (dest);
}
