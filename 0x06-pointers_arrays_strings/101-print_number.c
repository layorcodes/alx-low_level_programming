#include "main.h"

/**
 * print_number - prints an integer
 * @n: the input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a, i, count;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	i = a;
	count = 1;

	while (i > 9)
	{
		i /= 10;
		count *= 10;
	}

	for (; count >= 1; count /=10)
	{
		_putchar(((a / count) % 10) + 48);
	}
}
