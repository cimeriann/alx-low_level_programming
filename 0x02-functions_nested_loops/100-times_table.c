#include "main.h"

/**
  * print - local variable
  * @var: variable
 */
void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}

/**
  * print_times_table - to print n times table btw 0 and 14
  * @n: numbers to print out
*/
void print_times_table(int n)
{
	int x, y, mul;

	if (n < 0 || n > 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			mul = x * y;
			if (y == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul < 100)
			{
				_putchar(' ');
				print(mul);
			}
			else
			{
				print(mul);
			}
			if (y < n)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar('\n');
	}
}

