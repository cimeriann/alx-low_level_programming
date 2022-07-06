#include "main.h"
#include <stdio.h>

/**
 * _abs - print the absolute value of a number
 * @c: holds value to be checked
 * Return - Always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		return (c);
	}
}
