#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, fib_next;

	printf("%ld, %ld", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
		fib_next = fib1 + fib2;
		printf(", %ld", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}
