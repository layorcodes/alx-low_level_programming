#include "main.h"

/**
 * _sqrt_recursion - main function.
 * @n: ineger
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sub function.
 * @n: integer
 * @m: integer
 * Return: sqrt
 */
int _sqrt(int n, int m)
{
	if ( n < 0)
		return (-1);
	if ((m * m) > n)
		return (-1);
	if (m * m == n)
		return(m);
	return (_sqrt(n, m + 1));
}
