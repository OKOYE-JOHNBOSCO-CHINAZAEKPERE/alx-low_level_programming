#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 *
 * @c: integer c
 *
 * Return: returns 1 if c is a digit, returns 0 otherwise
 */
int _isdigit(int c)
{
	int val;

	if (c >= '0' && c <= '9')
		val = 1;
	else
		val = 0;
	return (val);
}
