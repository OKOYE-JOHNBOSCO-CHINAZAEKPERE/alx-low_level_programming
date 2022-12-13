#include "main.h"

/**
 * _puts -  prints a string followed by a new line
 * @str: pointer to string value
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		_putchar(*(str + i));

	_putchar('\n');
}
