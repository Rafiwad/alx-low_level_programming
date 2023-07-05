#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the string to be printed
 *
 * Description:
 * This function uses recursion to print each character of the string `s` in
 * reverse order. It first calls itself recursively with the next character in
 * the string until it reaches the null character (`\0`). Then, it prints each
 * character in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
