#include "main.h"

/***
 * _strpbrk - searches a string for any set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to te byte in s that matches one of the
 * bytes in accept, or Null if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, m;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + a) == *(accept + m))
				return (s + a);
		}
	}
	return ('\0');
}
