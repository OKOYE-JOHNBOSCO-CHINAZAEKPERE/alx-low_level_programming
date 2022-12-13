#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: pointer to string to be appended to
 * @src: pointer to string appended
 * @n: n byte(s) to be used
 *
 * Return: pointer to resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != *(src + n); j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
