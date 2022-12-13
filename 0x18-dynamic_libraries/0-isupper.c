#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: integer c
 *
 * Return: returns 1 if c is uppercase, returns 0 otherwise
 */
int _isupper(int c)
{
	int val;

	if (c >= 'A' && c <= 'Z')
		val = 1;
	else
		val = 0;
	return (val);
}
