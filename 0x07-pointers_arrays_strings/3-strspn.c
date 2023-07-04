/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the accepted characters
 *
 * Return: The number of bytes in the initial segment of s consisting only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
		match = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}

		if (match == 0)
			break;

		count++;
		s++;
	}

	return (count);
}
