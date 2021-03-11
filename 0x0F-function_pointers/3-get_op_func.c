#include "3-calc.h"
#include "function_pointers.h"
/**
 * get_op_func - Get the operation and return the corresponding
 * function
 *
 * @s: Operator
 *
 * Return: On Succes, The respective function;
 * On Error, Print 'Error' and exit (99)
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

	int i = 0;

	while (i < 5)
		if (*ops[i].op == *s && *(s + 1) == 0)
			return (ops[i].f);

	printf("Error\n");
	exit(99);
}
