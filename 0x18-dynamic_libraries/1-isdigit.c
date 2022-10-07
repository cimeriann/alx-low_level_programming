#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a number
 * @c: digit to be checked
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
