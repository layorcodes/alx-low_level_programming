#include "main.h"

/**
 * string_toupper - changes all lowercase ltters of astring
 * to uppercase letters
 * @s: inputs the string
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			count++;
	}

	return (s);
}
