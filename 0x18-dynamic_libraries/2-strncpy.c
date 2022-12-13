#include "main.h"

/**
 * _strncpy - Concatenates two strings
 *
 * @dest: pointer to string to be appended to
 * @src: pointer to string appended
 * @n: n byte(s) to be used
 *
 * Return: pointer to resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
