#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: The operator passed as an argument to the program
 * Return: Pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t ops[] = {
{"+", add},
{"-", sub},
{"*", mul},
{"/", div},
{"%", mod},
{NULL, NULL}
};

while (ops[i].op)
{
if (*s == *ops[i].op && s[1] == '\0')
return (ops[i].f);
i++;
}

return (NULL);
}
