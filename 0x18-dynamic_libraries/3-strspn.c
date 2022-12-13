#include "main.h"
/**
 * _strspn - gets the length of a prefix of substring
 *
 * @s: initial segment
 * @accept: ref segment
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count = 0;
				break;
			}
		}
		if (count == 1)
			break;
	}
	return (i);
}
