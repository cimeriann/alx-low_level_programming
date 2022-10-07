#include "main.h"

/**
 * _puts - prints string
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
	}
	_putchar('\n');
}
