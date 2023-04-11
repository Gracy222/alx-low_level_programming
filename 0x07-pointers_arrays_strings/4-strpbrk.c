#include "main.h"

/**
 * _strpbrk - that searches a string for any of a set of bytes.
 * @s: parameter 1
 * @accept: parameter 2
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;


	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
	{
		return (s);
	}


	}
	s++;
	}
	return ('\0');
}

