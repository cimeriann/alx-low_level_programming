#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - Print the base 10 digits
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
