#include "main.h"

int prime_tmp(int n, int i);
/**
 * divisor - is number prime?
 * @n: integer parameter
 * @m: integer parameter
 * Return: boolean
 */

int divisor(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisor(n + 2, m));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks if it is a prime number.
 * @n: integer parameter.
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}


