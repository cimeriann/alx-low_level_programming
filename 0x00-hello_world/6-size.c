#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char chr;
	int num;
	long lnum;
	long long llnum;
	float float_digit;

	printf("Size of a char: %lu byte(s)\n", sizeof(chr));
	printf("Size of an int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lnum));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llnum));
	printf("Size of a float: %lu byte(s)\n", sizeof(float_digit));

	return (0);
}
