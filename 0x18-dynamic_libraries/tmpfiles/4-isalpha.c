#include "main.h"

/**
 * _isalpha - checks if c is an alphabetic character
 * @c: character to be checked
 * Return: 1 if true 0 if otherwise
 */

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}
