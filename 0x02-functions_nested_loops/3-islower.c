#include "main.h"

/**
 * _islower checks if an alphabet is in lowecase
 * Return - always int
 */

int _islower(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
