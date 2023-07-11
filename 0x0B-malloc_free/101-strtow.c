#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count, len;

	len = 0;
	while (str[len] != '\0')
		len++;

	count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for an array of words.
 * @str: The string to split into words.
 * @num_words: The number of words.
 *
 * Return: On success, returns a pointer to the allocated memory.
 *         On failure, returns NULL.
 */
char **allocate_words(char *str, int num_words)
{
	char **words;
	int i, j, k, len, total_len = 0;

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		len = 0;
		while (str[total_len] == ' ')
			total_len++;
		while (str[total_len] != ' ' && str[total_len] != '\0')
		{
			len++;
			total_len++;
		}

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[total_len - len + k];
		words[i][k] = '\0';
	}

	words[i] = NULL;

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: On success, returns a pointer to the array of words.
 *         On failure or if str is empty, returns NULL.
 */
char **strtow(char *str)
{
	char **words;
	int num_words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	words = allocate_words(str, num_words);

	if (words == NULL)
		return (NULL);

	return (words);
}
