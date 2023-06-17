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
	write(1, "0123456789\n", 11);

	return (0);
}

