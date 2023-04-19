#include "function_pointers.h"
/**
 * array_iterator - execute a function on array element
 * @array: array
 * @size: size_t
 * @action: function to be checked
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
