#include "main.h"

/**
 * main - prints absolute values of an integer
 * return always zero
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
	return (i * -1);
	}
	_putchar('\n');
}
