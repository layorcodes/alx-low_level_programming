#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the stringgiven as a parameter.
 * @str: string to duplicate.
 *
 * Return: pointer to the copied string (success), NULL (error).
 */
char *_strdup(char *str)
{
	char *dp;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dp = malloc(sizeof(char) * (len + 1));

	if (dp == NULL)
		return (NULL);

	while ((dp[i] = str[i]) != '\0')
		i++;

	return (dp);
}
