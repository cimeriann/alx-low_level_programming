#include "main.h"

/**
 * swap_int - swap the values of two integer
 * @a: first int
 * @b: second int
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
