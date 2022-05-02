#include <stdio.h>
/**
 * main - prints all arguments it recieves.
 * @argc: number of command line argumenst.
 * @argv: array that contains the program command line.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
