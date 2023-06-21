#include "main.h"

/**
 * main - checks for alphabet
 * return 1 if @c is a letter otherwise return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z"));
}
