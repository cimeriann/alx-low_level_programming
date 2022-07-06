#include <stdio.h>

/**
  * main - sums factors of 3 and 5 below 1024 - Entry point
  * Return:  (0)
  */

int main(void)
{
	int x, total;

	for (x = 3; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			total += x;
		}
	}

	printf("%d\n", total);

	return (0);

}

