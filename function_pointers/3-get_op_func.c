#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * *get_op_func - selects the correct func for operation
 *@s: operator passed
 *Return: pointer to the fuction that matcher op
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

	while (i < 5)
	{
		if (strcmp(s, ops[1].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
