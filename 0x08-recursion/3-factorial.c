#include "main.h"
/**
 * factorial - calculates te factorial of a given number.
 * @n: input number.
 * Return: the given factorial number.
 */
int factorial(int n)
{
	int s;

	s = n * factorial(n - 1);
	n--;
	return (s);
}
