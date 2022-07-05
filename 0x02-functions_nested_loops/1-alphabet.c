#include "main.h"

/**
 * print_alphabet - print the alphabets of the english language
 * Return - always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
