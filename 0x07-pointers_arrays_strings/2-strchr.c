#include "main.h"

/**
 * _strchr- it locates a character in a string.
 *
 * @s: parameter 1
 * @c: parameter 2
 *
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int index;
	
	for (index = 0; s[index] >= '\0'; index++)

	{
		if (s[index] == c)
			return (s + index);

	}
	return ('\0');
}
