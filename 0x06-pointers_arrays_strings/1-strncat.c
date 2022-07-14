#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings together
 * @dest: destination
 * @src: source
 * @n: num
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);

	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++:
	}
	dest[length + i] = '\0';

	return (dest);
}
