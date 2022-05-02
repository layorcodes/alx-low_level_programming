#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of cl arguments
 * @argv: array that contains the program cl arguments.
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
