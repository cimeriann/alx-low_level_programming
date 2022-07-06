#include "main.h"
/**
 * print_sign - Return sign for an int
 * @c: The int to print
 * Return: Always 0.
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
		_putchar('0');
	}
	_putchar('\n');
}
