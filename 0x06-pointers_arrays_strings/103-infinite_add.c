#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result (r) or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len, carry, sum;
	int i, j;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (size_r <= len1 || size_r <= len2)
		return (0);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	len = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[len++] = sum % 10 + '0';
		carry = sum / 10;

		i--;
		j--;
	}

	r[len] = '\0';
	_reverse(r, len);

	return (r);
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _reverse - Reverses a string
 * @s: The string to be reversed
 * @len: The length of the string
 */
void _reverse(char *s, int len)
{
	int i = 0;
	int j = len - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
