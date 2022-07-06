#include "main.h"

/**
 * _isalpha - checks for an alphabet
 * Return - always int
 */

int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >=95 && c <= 120))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
