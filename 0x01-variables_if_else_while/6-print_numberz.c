#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - Print the base 10 digits 
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar("%i", i);
	}
	putchar('\n');
	return (0);
}
