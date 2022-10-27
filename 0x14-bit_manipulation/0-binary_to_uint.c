#include "main.h"

/**
 * binary_to_uint - coverts a binary to an unsigned int
 * @b: pointer to the strings of 0 & 1 chars
 * Return: the converted number, or 0 if;
 * there is one or more chars in the string b that is not 0 or 1,
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int j, base;
	unsigned int val;

	val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
		;

	for (j--, base = 1; j >= 0; j--, base *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		if (b[j] & 1)
			val += base;
	}

	return (val);
}
