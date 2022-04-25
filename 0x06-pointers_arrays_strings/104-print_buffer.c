#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints out a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int n, m, k;

	if (size <= 0)
		printf('\n');
	else
	{
		for (n = 0; n < size; n += 10)
		{
			printf("%.8x:", n);
			for (m = n; m < n + 10; m++)
			{
				if (m % 2 == 0)
					printf(" ");
				if (m < size)
					printf("%.2x", *(b + m));
				else
					printf("  ");
			}
			printf(" ");
			for (k = n; k < n + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", ',');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
