#include "main.h"

/**
 * string_toupper - changes all lowercase ltters of astring
 * to uppercase letters
 * @s: inputs the string
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int fig = 0;

	while (*(s + fig) != '\0')
	{
		if ((*(s + fig) >= 97) && (*(s + fig) <= 122))
			*(s + fig) = *(s + fig) - 32;
		fig++;
	}

	return (s);
}
