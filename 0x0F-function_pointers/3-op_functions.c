#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer.
 * @b: second integer.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integrs
 * @a: first integer.
 * @b: second integer.
 *
 * Return: diff btw a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calc the product of two integers.
 * @a: integer.
 * @b: integer.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - calculates te division btw 2 integers
 * @a: integer.
 * @b: integer.
 *
 * Return: result of division btw a and b .
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calc the remainder of the division of two integers.
 * @a: integer.
 * @b: integer.
 *
 * Return: result of te divison , the remain nder.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
