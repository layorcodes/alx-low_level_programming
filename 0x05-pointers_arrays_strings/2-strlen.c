#include "main.h"

/*
 * _strlen - returns te length of a string
 * @s: input string
 * Return: length of a sting
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
