#include "main.h"
#include <stdio.h>

/**
 * _strcpy - fuction copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 *
 * Return: a copy of the src.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	

	for (i = 0 ; src[i] != '\0' ;i++)
		dest[1] = src[i];
	return (dest);
}


