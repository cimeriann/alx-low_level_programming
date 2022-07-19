#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: pointer
 * @src: another char
 * @n: an unsigned int
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
