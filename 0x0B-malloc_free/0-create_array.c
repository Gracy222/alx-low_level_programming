#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - allocate space for an array
 * @size: number of byte to allocate
 * @c:character to initialize
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
