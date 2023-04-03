#include "main.h"

/**
 * _strspn - that gets the length of a prefix substring.
 * @s: parameter 1
 * @accept: parameter 2
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)

{
	char *p = s;

	while (*p)
	{
		char *q = accept;

		while (*q && *q != *p)
		{
		q++;
		}
		if (*q == '\0')
		{
			break;
		}
		p++;
	}
	return (p - s);
}

