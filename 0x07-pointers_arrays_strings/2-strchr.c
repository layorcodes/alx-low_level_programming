#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of te character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	for (; *(s + m) != '\0'; m++)
		if (*(s + m) == c)
			return (s + m);
	if (*(s + m) == c)
		return (s + m);
	return ('\0');
}
