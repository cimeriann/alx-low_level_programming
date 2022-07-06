#include "main.h"

/**
 * print_sign - print the sign of a character
 * Return - int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	elif (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	elif (n == 0)
	{
		return (0);
		putchar('0');
	}
	_putchar('\n');
}
