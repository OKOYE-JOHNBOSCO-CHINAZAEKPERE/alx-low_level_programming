#include "main.h"
/**
 * _strstr - finds first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to be searched
 * @needle: set of byte(s) to be searched for
 *
 * Return: pointer to byte s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
