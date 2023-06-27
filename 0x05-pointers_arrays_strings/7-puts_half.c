#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Description: This function prints the second half of the input string,
 *              followed by a new line. If the number of characters is odd,
 *              it prints the last (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	while (str[length] != '\0')
	length++;
	if (length % 2 == 0)

	start_index = length / 2;
	else

	start_index = (length + 1) / 2;

	for (i = start_index; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
