#include "main.h"

/**
 * rev_string - reverses a string
 * @s: contains string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;

	i = 0;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + 1));
	}
	_putchar('\n');
}
