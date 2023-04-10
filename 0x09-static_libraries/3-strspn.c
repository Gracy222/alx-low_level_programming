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
	int i;
	int j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}

		}
		if (accept[j] == '\0')
			return (len);
	}
	return (len);
}
