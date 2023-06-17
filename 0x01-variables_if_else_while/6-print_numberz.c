#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		write(1, &digit, 1);

	write(1, "\n", 1);

	return (0);
}
