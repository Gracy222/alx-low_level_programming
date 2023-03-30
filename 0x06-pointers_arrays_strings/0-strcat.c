#include "main.h"

/**
 * 0-strcat - that concatenates two strings.
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int length_of_string, z;
	length_of_string = 0;

		while (dest[length_of_string] != '\0')
		{
			z++;
		}
	for (z = 0; src[z] != '\0'; z++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
