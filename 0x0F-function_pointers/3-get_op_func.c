#include "3-calc.h"
/**
 * get_op_func - finds and points to correct function
 * @s: the operator string
 *
 * Return: 0 or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s == ops[i])
			return (0);
		i++;
	}
	return (NULL);
}
