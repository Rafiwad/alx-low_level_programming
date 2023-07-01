/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through each letter in the alphabet */
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			/* Check if the current character matches a letter to be encoded */
			if (str[i] == alphabet[j])
			{
				/* Replace the letter with its corresponding ROT13 value */
				str[i] = rot13[j];
				break;  /* Exit the inner loop after replacement */
			}
		}
	}

	/* Return a pointer to the resulting string */
	return (str);
}
