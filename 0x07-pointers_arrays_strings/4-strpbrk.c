#include <stddef.h>

char *_strchr(char *s, char c);

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
			return (s);
		s++;
	}

	return (NULL);
}

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the string to be searched
 * @c: The character to be located
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
