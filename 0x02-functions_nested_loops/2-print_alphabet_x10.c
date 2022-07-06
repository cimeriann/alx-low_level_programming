#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets of the english language ten times
 * Return - always void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');

	}
}
