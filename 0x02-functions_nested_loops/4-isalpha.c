#include "main.h"

/**
 * main - checks for alphabet
 * return 1 if @c is a letter otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
