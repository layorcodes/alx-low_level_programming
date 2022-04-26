#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagnonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix.
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int m, sum = 0, sum1 = 0;

	for (m = 0; m < (size * size); m++)
	{
		if (m % (size + 1) == 0)
			sum += *(a + m);
		if (m % (size - 1) == 0 && m != 0 && m < size * size - 1)
			sum1 += *(a + m);
	}
	printf("%d, %d\n", sum, sum1);
}
