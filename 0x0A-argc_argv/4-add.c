#include <stdlib.h>
#include <stdio.h>
#include "stdbool.h"

/**
 * is_num - iterates trough each argv to test if its a number
 * @args: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *args)
{
	int m = 0;
	
	for (m = 0; args[m]; m++)
	{
		if (!(args[m] >= '0' && args[m] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (n < argc)
	{
		if (is_num(argv[n]))
		{
			sum += atoi(argv[n]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
