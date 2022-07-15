#include "main.h"

void print_uint(unsigned int n);

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_uint((unsigned int) n);
}

/**
 * print_uint - prints an unsigned integer
 * @n: unsigned int to be printed
 * Return: void
 */

void print_uint(unsigned int n)
{
	if (n / 10 != 0)
	{
		print_uint(n / 10);
	}
	_putchar(n % 10 + '0');
}


