#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - Prints an error message and exits with a status of 98.
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, carry;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
			carry = result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (k = i; k < len1 + len2; k++)
		printf("%d", result[k]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit();

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				error_exit();
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}
