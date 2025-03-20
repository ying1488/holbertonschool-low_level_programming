#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include <stdio.h>

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

	while (*ops[i].op != *s)

	{
		i = i + 1;

		if ((i > 4) || (s[1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}

	}
	return (ops[i].f);
}
