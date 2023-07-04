#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *h, *n;

	while (*haystack != '\0')
	{
		start = haystack;
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (start);

		haystack++;
	}

	return (NULL);
}
