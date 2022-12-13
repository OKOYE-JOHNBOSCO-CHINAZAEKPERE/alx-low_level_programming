#include "main.h"
/**
 * _strpbrk - gets the length of a prefix of substring
 *
 * @s: string to be searched
 * @accept: set of byte(s) to be searched for
 *
 * Return: pointer to byte s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
