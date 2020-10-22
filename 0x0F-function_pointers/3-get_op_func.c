#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function to determines correct funstion to use
 * @s: operator used to determine function
 * Return: pointer to function corresponding with operator
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (ops[i] == s[0])
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
