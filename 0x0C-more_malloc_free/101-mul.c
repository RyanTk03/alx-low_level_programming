#include <stdio.h>
#include <stdlib.h>

/**
 * @argc: the number of arguments
 * @argv: the arguments values
 *
 * Return: 0 is all is done well, 98 else
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    for (int i = 0; num1_str[i] != '\0'; i++)
    {
        if (num1_str[i] < '0' || num1_str[i] > '9')
        {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2_str[i] != '\0'; i++)
    {
        if (num2_str[i] < '0' || num2_str[i] > '9')
        {
            printf("Error\n");
            return 98;
        }
    }

    unsigned long num1 = strtoul(num1_str, NULL, 10);
    unsigned long num2 = strtoul(num2_str, NULL, 10);
    unsigned long result = num1 * num2;

    printf("%lu\n", result);

    return 0;
}
