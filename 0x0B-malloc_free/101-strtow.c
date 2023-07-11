#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for an array of words.
 * @num_words: The number of words.
 *
 * Return: Pointer to the array of words, or NULL if it fails.
 */
char **allocate_words(int num_words)
{
	char **words;
	int i;

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		words[i] = malloc(sizeof(char));
		if (words[i] == NULL)
		{
			while (i >= 0)
			{
				free(words[i]);
				i--;
			}
			free(words);
			return (NULL);
		}
	}

	return (words);
}

/**
 * copy_words - Copies words from the input string to the array.
 * @str: The input string.
 * @words: The array of words.
 *
 * Return: Nothing.
 */
void copy_words(char *str, char **words)
{
	int i, j, k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				;

			words[k] = realloc(words[k], sizeof(char) * (j - i + 1));
			if (words[k] == NULL)
				return;

			for (j = 0; str[i] != ' ' && str[i] != '\0'; j++, i++)
				words[k][j] = str[i];

			words[k][j] = '\0';
			k++;
		}
	}
	words[k] = NULL;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int num_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = allocate_words(num_words);
	if (words == NULL)
		return (NULL);

	copy_words(str, words);

	return (words);
}
