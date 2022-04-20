#include "main.h"

/*
 * swap_int - swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Description : swaps two integers
 *
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
