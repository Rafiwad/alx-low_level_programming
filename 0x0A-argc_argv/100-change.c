#include <stdio.h>
#include <stdlib.h>

int calculate_coins(int cents);

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of strings representing the command line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	coins = calculate_coins(cents);
	printf("%d\n", coins);

	return (0);
}

/**
 * calculate_coins - Calculates the minimum number of coins required for change
 * @cents: The amount of money in cents
 *
 * Return: The minimum number of coins required
 */
int calculate_coins(int cents)
{
	int num_coins = 0;

	if (cents >= 25)
	{
	num_coins += cents / 25;
	cents %= 25;
	}

	if (cents >= 10)
	{
	num_coins += cents / 10;
	cents %= 10;
	}

	if (cents >= 5)
	{
	num_coins += cents / 5;
	cents %= 5;
	}

	if (cents >= 2)
	{
	num_coins += cents / 2;
	cents %= 2;
	}

	num_coins += cents;

	return (num_coins);
}
