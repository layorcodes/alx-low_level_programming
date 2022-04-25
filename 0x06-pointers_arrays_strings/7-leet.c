#include "main.h"
/**
 * leet - encodes a  string
 * @s: the input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int figure = 0, m;
	int lower_letter[] = {97, 101, 111, 116, 108};
	int upper_letter[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + figure) != '\0')
	{
		for (m = 0; m < 5; m++)
		{
			if (*(s + figure) == lower_letter[m] || *(s + figure) == upper_letter[m])
			{
				*(s + figure) = numbers[m];
				break;
			}
		}
		figure++;
	}

	return (s);
}
