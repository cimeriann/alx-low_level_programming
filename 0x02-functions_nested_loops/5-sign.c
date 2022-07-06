#include "main.h"

/**
 * print_sign - print the sign of a character
 * @n: holds value to be checked
 * Return - 0 if negative, 1 if positive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	} 
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	_putchar('\n');
}
