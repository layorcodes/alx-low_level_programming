#include "main.h"

/**
 * _strcat - this function commutes two strings
 * @dest: parameter to a pointer
 * @src: parameter pointer to a character
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y =0;

	while (*(dest + x) != '\0')
	{
		x++;
	}
	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) = '\0')
			break;
		x++;
		y++;
	}
	

	return (dest);
}
