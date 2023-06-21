#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int count;
    long int fib1 = 1, fib2 = 2, fib_sum, even_sum = 0;

    while (fib1 <= 4000000)
    {
        if (fib1 % 2 == 0)
            even_sum += fib1;

        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
    }

    printf("%ld\n", even_sum);

    return 0;
}
