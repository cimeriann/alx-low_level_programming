#include "main.h"
#include "string.h"
/**
 * _strcat - concatenate two strings together
 * @dest: destination
 * @src: source
 * @n: num
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;

	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}
