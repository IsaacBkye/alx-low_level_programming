#include "3-calc.h"
/**
 * get_op_func - Get operator
 * @s: arg
 * Return: result
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

	i = 0;
	while (ops[i].op[0] != NULL)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (0);
}
