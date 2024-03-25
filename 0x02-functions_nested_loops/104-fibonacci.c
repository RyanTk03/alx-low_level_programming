#include <stdio.h>

int main(void)
{
    unsigned long int fib1 = 1;
    unsigned long int fib2 = 2;

    printf("%lu, %lu", fib1, fib2);

    for (int i = 2; i < 98; i++)
    {
        unsigned long int next_fib = fib1 + fib2;
        printf(", %lu", next_fib);
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\n");

    return 0;
}
