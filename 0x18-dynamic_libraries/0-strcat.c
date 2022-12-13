#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: pointer to string to be appended to
 * @src: pointer to string appended
 *
 * Return: pointer to resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
