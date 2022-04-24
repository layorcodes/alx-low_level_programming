#include "main.h"

/**
 * _strcat - this function commutes two strings
 * @dest: parameter to a pointer
 * @src: parameter pointer to a character
 * Return: return value of dest
 */

char *_strcat(char *dset, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
