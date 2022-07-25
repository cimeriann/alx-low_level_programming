#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints num of args passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	int index;
 
	for (index = 0, index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
