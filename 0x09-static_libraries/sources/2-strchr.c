#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: the char
 * Return: a pointer to the first occurence or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}

	return (s + 1);
}
