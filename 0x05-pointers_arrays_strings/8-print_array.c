#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The input array
 * @n: The number of elements to be printed
 *
 * Description: This function prints the first n elements of the input array,
 *              followed by a new line. The numbers are separated by a comma
 *              and a space. The numbers are displayed in the same order as
 *              they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i != n - 1)
	printf(", ");
	}

	printf("\n");
}
