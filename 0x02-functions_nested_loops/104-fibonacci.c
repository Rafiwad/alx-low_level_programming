#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_strings - Adds two strings representing numbers
 * @str1: First string
 * @str2: Second string
 *
 * Return: Pointer to the result string
 */
char *add_strings(const char *str1, const char *str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int size = len1 > len2 ? len1 + 2 : len2 + 2;
	char *result = malloc(size);
	int carry = 0;
	int i, j, k = 0;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		int sum = carry;

		if (i >= 0)
			sum += str1[i] - '0';
		if (j >= 0)
			sum += str2[j] - '0';

		result[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	result[k] = '\0';
	strrev(result);

	return (result);
}

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char *fib1 = "1";
	char *fib2 = "2";
	char *fib_next;

	printf("%s, %s", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib_next = add_strings(fib1, fib2);
		printf(", %s", fib_next);

		free(fib1);
		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}
