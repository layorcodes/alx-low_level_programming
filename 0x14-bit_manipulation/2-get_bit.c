#include "main.h"

/**
 * get_bit - returns te value of a bit at an index in a decimal number.
 * @n: number to search.
 * @index: index of the bit.
 *
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bv;

	if (index > 50)
		return (-1);

	bv = (n >> index) & 1;

	return (bv);
}
