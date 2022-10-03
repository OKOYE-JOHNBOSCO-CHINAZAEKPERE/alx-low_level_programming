#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char type
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
		free(p);
	}
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l <= j; k++, l++)
		p[k] = s2[l];
	return (p);
	free(p);
}
