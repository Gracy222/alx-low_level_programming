#include <stdlib.h>
/**
 * create_array - allocate space for an array
 * @size: number of byte to allocate
 * @c:character to initialize
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{

	char *array = malloc(size);


	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
	array[size] = c;
		return (array);
}
