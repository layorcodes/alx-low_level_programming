#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct functiom to perform
 * the operation asked by the user
 * @s: te operation given by user.
 *
 * Return: pointer to the function thet corresponds to te operation
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}
		{"-", op_sub}
		{"*", op_mul}
		{"/", op_div}
		{"%", op_mod}
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
i	}

	return (NULL);
}
