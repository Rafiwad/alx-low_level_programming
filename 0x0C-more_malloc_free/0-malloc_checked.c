/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the malloc_checked function should cause normal
 *         process termination with a status value of 98
 */
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *ptr;

	/* Allocate memory using malloc */
	ptr = malloc(b);

	/* Check if the memory allocation was successful */
	if (ptr == NULL)
	{
	/* If malloc fails, cause process termination with a status value of 98 */
		exit(98);
	}

	return (ptr);
}
