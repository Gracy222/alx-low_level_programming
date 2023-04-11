#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: variable is used to store the address of the original
 * string
 * Return: return NULL if str is Null
 * pointer to duplicated string on success
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	new_str[len] = '\0';

		return (new_str);
}
