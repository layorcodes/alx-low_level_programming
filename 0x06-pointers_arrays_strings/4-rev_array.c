#include "main.h"
/**
 * reverse_array - reverses the content of an array 
 * of integers
 * @a: array
 * @n: the number of elements of teh array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int m, j, rev;

	for (m = 0; m < n - 1; m++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
