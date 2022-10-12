#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - choose the operatin to performded
 * @s: a string
 * Return: a pointer to a function
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

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (s[0] == ops->op[i])
			break;
	}
	return (ops[i / 2].f);
}
