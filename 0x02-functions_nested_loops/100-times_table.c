#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number of times table to print
 *
 * Description: Prints the n times table in the specified format,
 * starting with 0 and up to n. If n is greater than 15 or less than 0,
 * the function does not print anything.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
				printf("%d", product);
			else
				printf(", %3d", product);
		}

		printf("\n");
	}
}
