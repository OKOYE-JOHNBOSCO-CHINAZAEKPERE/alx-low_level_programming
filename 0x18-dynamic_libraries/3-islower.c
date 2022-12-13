#include "main.h"

/**
 * _islower -  lowercase checker. Returns 1 if true and 0 if false
 *
 * @c: integer parameter c
 *
 * Return: returns value
 */

int _islower(int c)
{
	int value;

	if (c >= 'a' && c <= 'z')
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
