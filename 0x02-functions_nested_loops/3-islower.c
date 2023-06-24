#include "main.h"

/**
* main - checks for lower case 
* return i if char is lowercae else return 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
