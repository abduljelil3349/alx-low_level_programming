#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if c is a digit, 0 in other case.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
