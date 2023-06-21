#include "main.h"

/**
 * main - print_alphabet
 * return 0
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return(0);
}
