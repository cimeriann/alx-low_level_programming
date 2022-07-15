#include "main.h"

/**
 * reverse_array -  reverses an array of integers.
 * @a: num
 * @n: num
 */

void reverse_array(int *a, int n)
{
	int i;

	int b;

	i = 0;

	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
