#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description:
 * This function uses recursion to print each character of the string `s` until
 * it reaches the null character (`\0`). It then prints a new line character.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
