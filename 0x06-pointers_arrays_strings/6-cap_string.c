#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i;
	bool capitalize_next = true;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = true;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next)
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize_next = false;
		}
		else
		{
			capitalize_next = false;
		}
	}

	return (str);
}
