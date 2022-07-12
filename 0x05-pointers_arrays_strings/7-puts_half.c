#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be processed
 * Return: void
 */

void puts_half(char *str)
{
	int length, i, n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
