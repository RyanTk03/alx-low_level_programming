#include <stdio.h>

int main(void)
{
    int fib1 = 1;
    int fib2 = 2;
    int sum = 0;

    while (fib2 <= 4000000)
    {
        if (fib2 % 2 == 0)
            sum += fib2;

        int next_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("%d\n", sum);

    return 0;
}
