#include "main.h"

/**
 * _strlen -  prints the length of a string
 * @s: pointer to string
 * Return: returns i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
