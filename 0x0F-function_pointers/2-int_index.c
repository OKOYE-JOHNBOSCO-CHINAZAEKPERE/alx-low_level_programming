#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp function does
 * not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	ptr = cmp;
	if (array && ptr)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (ptr(array[i]))
				return (i);
	}
	return (-1);
}
