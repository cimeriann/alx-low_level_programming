#include <stdio.h>
#include <main.h>

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

	if (argc > 1)
	{
		count = argc - 1;
		_putchar(count);
	}
	_putchar('\n');
	return (0);
}
