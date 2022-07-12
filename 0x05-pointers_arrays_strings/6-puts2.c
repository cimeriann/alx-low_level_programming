#include "main.h"

/**
 * puts2 - prints every other chr in a string
 * @str: string to be printed
 * Return: void
 */

void _puts22(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
