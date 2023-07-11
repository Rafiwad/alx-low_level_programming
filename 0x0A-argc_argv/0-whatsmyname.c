#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of strings representing the command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc; /* Unused parameter */

	for (i = 0; argv[0][i] != '\0'; i++)
	{
	_putchar(argv[0][i]);
	}

	_putchar('\n');

	return (0);
}

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (putchar(c));
}
