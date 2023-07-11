#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the duplicate */
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
