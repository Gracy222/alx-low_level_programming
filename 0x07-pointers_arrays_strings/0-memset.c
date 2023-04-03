#include "main.h"

/**
 * -memset - fills memory with a constant byte.
 *  @s: parameter 1
 *  @b: parameter 2
 *  @n: parameter 3
 *
 *  Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;
	while (n--)
	{
	*p++ = b;
	}
	return s;
}
