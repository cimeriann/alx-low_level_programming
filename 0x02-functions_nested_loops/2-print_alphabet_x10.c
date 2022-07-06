#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets of the english language ten times
 * Return - always void
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

	}
}
