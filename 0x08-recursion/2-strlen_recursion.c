#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description:
 * This function recursively calculates the length of the string `s` by
 * incrementing the length by 1 for each character until it reaches the null
 * character (`\0`), indicating the end of the string.
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
