#include <stdio.h>
#include "main.h"

/**
 * main - function that prints alli args passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = _atoi(arg[1]) * _atoi(arg[2]);
	}
	else if (argc < 3)
	{
		printf("Error\n");
	}
	return (0);
}
