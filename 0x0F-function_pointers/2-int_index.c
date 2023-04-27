#include "function_pointers.h"

/**
 * int_index - Returns index place if comparison is tru, else -1
 * @array: The array
 * @size: The amount of elements to print
 * @cmp: The pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
