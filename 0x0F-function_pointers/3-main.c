#include "3-calc.h"

/**
 * main - main function for simple calculator program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success, or exit status on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);

op = get_op_func(operator);

if (!op)
{
printf("Error\n");
return (99);
}

result = op(num1, num2);

printf("%d\n", result);

return (0);
}
