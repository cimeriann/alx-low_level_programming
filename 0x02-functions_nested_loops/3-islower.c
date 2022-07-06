#include "main.h"

/**
 * _islower checks if an alphabet is in lowecase
 * c - any digit
 * Return - always int
 */

int _islower(int c)
{
	c = 'a';

	if(c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
