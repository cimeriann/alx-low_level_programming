#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - Print hex digits 
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i);
		i++;
	}
	char c = 'a'
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
