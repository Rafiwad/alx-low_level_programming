#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number between 0 and 99
 * and prints whether it is positive, zero, or negative.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Initialize random seed based on current time */

    n = rand() % 100;

    printf("%d is ", n);

    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}

