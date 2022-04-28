#include "main.h"
/**
 * square - square conditions.
 * @i: integer.
 * @n: integer.
 *
 * return: the result.
 */
int square(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i > n / 2)
		return (-1);
	else
		return (square(i + 1, n));
}

/**
 * _sqrt_recursion - square integer
 * @n: an integer.
 *
 * Return: sqiuare of number
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}
