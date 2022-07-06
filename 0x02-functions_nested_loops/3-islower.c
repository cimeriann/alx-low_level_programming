#include "main.h"

/**
 * _islower - checks if an alphabet is in lowecase
 * @c: int
 * Return - 1 if _islower, 0 if not
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
