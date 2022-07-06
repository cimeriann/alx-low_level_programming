#include "main.h"

/**
 * _abs - print the absolute value of a number
 * Return - 0 or 1
 */

int _abs(int c)
{
	int soln;

	if (c < 0)
	{
		soln = c * -1;
		_putchar(soln);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
	_putchar('\n');
}
