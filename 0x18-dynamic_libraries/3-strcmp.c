#include "main.h"

/**
 * _strcmp - Concatenates two strings
 *
 * @s1: pointer to string to be appended to
 * @s2: pointer to string appended
 *
 * Return: 15, -15 & 0 if length of s1 > s2, s1 < s2 & s1 == s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}
