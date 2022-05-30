#include "main.h"

/**
 * flip_bits - counts the num of bits to flip.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 50; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
