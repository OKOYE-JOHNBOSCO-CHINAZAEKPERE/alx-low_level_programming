#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: pointer to array fo functions
 * @size: size of array
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*ptr)(int);

	ptr = action;
	if (array && action)
		for (i = 0; i < size; i++)
			ptr(array[i]);
}
