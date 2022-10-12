#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: pointer to name array
 * @f: function pointer of type char
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name && f)
	{
		ptr = f;
		ptr(name);
	}
}
