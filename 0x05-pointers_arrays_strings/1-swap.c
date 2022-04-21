#include "main.h"

/**
 * swap_int - this function swap two integers,
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Description: this function swaps integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
