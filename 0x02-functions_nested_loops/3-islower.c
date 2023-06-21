#include "main.h"

/**
* main - checks for lower case 
* return i if char is lowercae else return 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
