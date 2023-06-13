#include "main.h"

/**
 * _strstr - that locates a substring.
 * @haystack: parameter 1
 * @needle: parameter 2
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int x;


	if (*needle == 0)
		return (haystack);


	while (*haystack)
	{
		x = 0;


		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);


				x++;


			} while (haystack[x] == needle[x]);
		}


		haystack++;
	}


	return ('\0');
}

