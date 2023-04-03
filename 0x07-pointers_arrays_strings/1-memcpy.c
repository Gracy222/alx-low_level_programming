#include "main.h"

/**
 * _memcpy - that copies memory area
 * @dest: - parameter 1
 * @src: - parameter 2
 * @n: - parameter 3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (n--)
	{
	*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}

