#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the input strin
 * Return: the pointer to the destination parameter
 */

char *rot13(char *s)
{
	int fig = 0, m;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + fig) != '\0')
	{
		for (m = 0; m < 52; m++)
		{
			if (*(s + fig) == alphabets[m])
			{
				*(s + fig) = rot13[m];
				break;
			}
		}
		fig++;
	}

	return (s);
}
