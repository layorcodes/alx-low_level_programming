#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: strong to be checked
 *
 * Description: this function returns the length of a given string
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
