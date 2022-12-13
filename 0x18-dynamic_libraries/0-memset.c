#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed
 * ponted to by s with the constant byte b
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of byte(s) to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
