#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints each array element on a new line
 * @array: The array
 * @size: The amount of elements to print
 * @action: The pointer to print
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
