#include "main.h"
/**
 * factorial - calculates te factorial of a given number.
 * @n: input number.
 * Return: the given factorial number.
 */
int factorial(int n)
{
	int s;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	s = n * factorial(n - 1);
	return (s);
}
