#include "main.h"
/**
 * _strncat - this function cocatenates two strings
 * @dest: the parameter to be returned.
 * @src: the parameter to be appended.
 * @n: amount of bytes to be used for src.
 * Return: return the value of dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int fig = 0, fig1 = 0;

	while (*(dest + fig) != '\0')
	{
		fig++;
	}

	while (fig1 < n)
	{
		*(dest + fig) = *(src +fig1);
		if (*(src + fig1) == '\0')
			break;
		fig++;
		fig1++;
	}
	return (dest);
}
