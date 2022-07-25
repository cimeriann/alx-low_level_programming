#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	int count;

	if (argv > 1)
	{
		count -= argc;
		printf("%d\n", count);
	}
	return (0);
}
