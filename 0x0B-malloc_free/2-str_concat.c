#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;

	dest = (char *)malloc(sizeof(s1) + sizeof(s2) - 1);

	int i = 0, j = 0;
	
	int length, length2, maxlen;

	for (length = 0; s1[length] != '\0'; length++)
	{
	}
	while (s1[i] != '\0' && i <= length)
	{
		dest[i] = s1[i];
		i++;
	}
	for (length2 = 0; s2[length2] != '\0'; length++)
	{
	}
	maxlen = length + length2;
	while (length <= maxlen && j <= length2)
	{
		dest[length] = s2[j];
		length++;
		j++;
	}
}
