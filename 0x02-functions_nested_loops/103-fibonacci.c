#include <stdio.h>

/**
 * main - Calculates the sum of even-valued Fibonacci terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib_next;
	long sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		fib_next = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("%ld\n", sum);

	return (0);
}
